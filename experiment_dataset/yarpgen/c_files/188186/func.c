/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188186
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_3);
        arr_3 [i_0] = max((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_1 [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)136))))));
        var_11 = ((/* implicit */long long int) var_6);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((((/* implicit */long long int) max((((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (short)511)) : (var_9)))))), (min((((/* implicit */long long int) (signed char)13)), (4045941367785783547LL))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 4; i_2 < 15; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) 7737539843766431133LL);
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) (((+(var_0))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) arr_15 [(unsigned short)15] [i_2 - 4] [i_4])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) arr_23 [i_2 - 4] [i_2 - 2] [i_2 - 4]);
                            var_15 ^= ((/* implicit */unsigned short) arr_18 [i_8] [i_7] [i_6]);
                        }
                    } 
                } 
            } 
            arr_24 [i_1] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_9) : (((/* implicit */int) (short)13213))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (((var_8) << (((248024771U) - (248024768U)))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) (unsigned char)45)))))))))))));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_6))));
        }
        var_18 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) - (var_8)))) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) var_1))))) - (max((max((arr_9 [i_1] [i_1]), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (unsigned char)132))))));
    }
    for (signed char i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (~(arr_16 [i_10] [i_10])));
        arr_31 [(short)5] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) min((arr_6 [i_10]), (((/* implicit */unsigned short) var_6))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))))))));
    }
    var_20 = var_4;
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(0ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (var_6)))) && (((/* implicit */_Bool) -1LL)))))) : (((((/* implicit */_Bool) (signed char)-66)) ? (min((var_8), (((/* implicit */unsigned long long int) 6477686172103110019LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)66)))))))));
    var_22 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_3))))))));
}
