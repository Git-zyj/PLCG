/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153507
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
    var_14 = ((/* implicit */signed char) var_10);
    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((var_1) != (var_4))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (0LL)))), (var_0)));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)21)) % (((/* implicit */int) ((signed char) var_11)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (((~(-6533868826414813246LL))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 1])) > (((/* implicit */int) arr_5 [i_1 + 3]))))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) (signed char)115);
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) != (1032192U))) ? ((-2147483647 - 1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))) != (4293935114U)))))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_18 |= max((((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0] [i_0] [i_1 + 2]) : (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) var_4)));
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) 719478773U);
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) var_12);
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                    var_20 = ((/* implicit */unsigned int) var_7);
                }
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) arr_13 [i_1] [i_4])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_4])) : (129024ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15057))))) ? (((/* implicit */long long int) var_1)) : (arr_2 [i_1 - 2] [i_1 + 4] [i_1 - 1]))))));
                    var_23 ^= ((/* implicit */int) min((min((((2352113066U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)15057)) : (var_9)))))), (((/* implicit */unsigned int) max((((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_4])))), (min((((/* implicit */int) var_8)), (arr_8 [i_1] [0LL]))))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) (~(2047LL)));
                    var_25 = ((/* implicit */short) max((var_25), (var_11)));
                    var_26 = arr_12 [i_1];
                    arr_22 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-96)))) | (((((((/* implicit */int) (signed char)-54)) + (2147483647))) >> (0ULL)))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    arr_25 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32754)) != (((/* implicit */int) (short)32767))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)30895)) : (((/* implicit */int) arr_1 [i_6]))))))) || (((/* implicit */_Bool) (-2147483647 - 1))))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_29 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_1 + 4] [i_1 - 2]))))), (min((-5771061786739784537LL), (9223372036854775807LL)))));
                                var_30 ^= ((/* implicit */signed char) arr_9 [i_1] [i_1]);
                                var_31 *= ((/* implicit */unsigned short) (~(min((var_7), (arr_4 [i_1 + 1] [i_0] [i_7])))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (-(var_3)))), ((-(var_0))))))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(var_7)))), (min((((/* implicit */unsigned long long int) ((4293935086U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41)))))), (((((/* implicit */_Bool) 2147483647)) ? (var_2) : (((/* implicit */unsigned long long int) var_13))))))));
}
