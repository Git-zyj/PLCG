/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127003
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 -= ((/* implicit */_Bool) (unsigned char)7);
                    var_15 = ((/* implicit */long long int) ((int) -4631273788938190021LL));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */signed char) (short)-1);
                        arr_10 [i_0] [3] [i_2 + 1] [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1073741823ULL)))) * (((((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1])), (arr_2 [i_3] [i_3] [(_Bool)1])))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (3202985577U)))))));
                        arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) arr_3 [i_0] [i_0])))) ? (((((1868088065) - (2083985692))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_4)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((3202985577U) - (3202985547U)))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_9 [i_0] [3U] [(_Bool)0] [10] [9ULL]))))))) ? (((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_2)), (3202985577U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))) : ((+(9223372036854775807LL)))));
                        var_18 = ((/* implicit */unsigned short) var_3);
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_7 [i_0 - 1] [i_0 + 1])))));
                            var_19 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) (short)32767)), ((~(4294967295U)))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (arr_3 [i_2] [i_4])));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) != ((-(((unsigned long long int) var_5))))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_1 [i_0])) : (1868088065)))) ? (var_0) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (3202985577U)))))) && (((/* implicit */_Bool) arr_15 [(short)7] [(short)1] [i_6] [(unsigned short)6] [(unsigned short)6] [9U] [(unsigned short)6]))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20414)) << (((1073741823ULL) - (1073741823ULL)))));
                    }
                    arr_22 [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */signed char) var_2);
                }
            } 
        } 
    } 
    var_24 = ((unsigned long long int) (((-(((/* implicit */int) (short)-1)))) * (((((/* implicit */int) (signed char)0)) - (((/* implicit */int) var_6))))));
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */short) (+(min((((/* implicit */int) arr_29 [i_9 - 1] [i_8 + 1] [i_7])), (2147483647)))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) (signed char)127);
                            arr_37 [i_7] [i_8] [i_9 - 1] [i_9 - 1] [i_11] = (short)-1;
                        }
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_39 [i_12] [i_9 - 1] [i_9 - 1] [i_8 - 1] [i_8] [i_8 + 2]))) | (((/* implicit */int) ((signed char) arr_39 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_8 + 2] [i_7] [i_7])))));
                            var_28 = ((((/* implicit */_Bool) (-(((unsigned long long int) (unsigned char)255))))) ? ((~(((((/* implicit */_Bool) 16777215ULL)) ? (((/* implicit */int) (unsigned short)2278)) : (((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) ((unsigned char) arr_33 [i_9 - 1]))));
                            var_29 += ((/* implicit */int) min((((unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) 0)) : (arr_34 [i_7] [19ULL] [i_9] [i_10] [17U])))), (((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (unsigned short)96))))))));
                        }
                    }
                    var_30 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)26)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((unsigned char) 134217727U)))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))) <= ((((-(((/* implicit */int) var_8)))) + (((/* implicit */int) var_6))))));
}
