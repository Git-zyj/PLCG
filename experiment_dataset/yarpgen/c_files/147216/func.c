/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147216
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)9890)) : (((/* implicit */int) (_Bool)1))));
                        var_15 = ((/* implicit */signed char) (unsigned char)251);
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : ((+((-(((/* implicit */int) (short)3673))))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */long long int) min(((signed char)27), ((signed char)126)))), ((((_Bool)1) ? (((((/* implicit */_Bool) 15U)) ? (5394054109341813113LL) : (((/* implicit */long long int) 2573876990U)))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))))))));
    }
    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_6))));
        arr_12 [i_4 - 1] [i_4 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) min((var_8), (((/* implicit */short) var_5))))), (var_6))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (var_0))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))) ? (((((/* implicit */int) ((((/* implicit */int) (signed char)7)) <= (((/* implicit */int) (signed char)-4))))) * (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_12))))))) : ((~(var_13)))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (unsigned short)40514)) : (((/* implicit */int) (unsigned char)122)))) : (((/* implicit */int) var_8))));
                                var_21 = ((/* implicit */short) var_11);
                            }
                        } 
                    } 
                    arr_25 [i_5] [i_5] [i_5] = arr_20 [i_4 + 1] [i_4] [(unsigned short)5] [i_5] [1U] [1U];
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_30 [i_5] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_10] [(_Bool)1] [i_10] [(unsigned char)2])) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (1569174215) : (((/* implicit */int) (signed char)-12)))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (_Bool)1))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (14977190509388414201ULL))), (((/* implicit */unsigned long long int) ((var_5) && ((_Bool)0)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)55)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)63217)) ? (6241728803103487019ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-8666554593222442968LL))))))));
    }
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        arr_33 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((-(((/* implicit */int) var_9))))))) ? (((/* implicit */int) max((arr_23 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_23 [(_Bool)1] [(_Bool)1] [0] [i_11] [i_11] [i_11] [i_11])))) : ((+((-(((/* implicit */int) arr_22 [(_Bool)1] [7ULL] [i_11]))))))));
        var_24 += ((/* implicit */unsigned char) arr_5 [i_11] [7U] [i_11]);
    }
    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)48674)), (6448839534203291633ULL)))))))));
    var_26 &= ((((/* implicit */long long int) ((/* implicit */int) ((max((4112872535U), (((/* implicit */unsigned int) var_1)))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_7))))))))) <= (min((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (4611686018360279040LL))), (((/* implicit */long long int) min((((/* implicit */short) var_2)), (var_1)))))));
}
