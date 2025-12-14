/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110723
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((+(((((/* implicit */_Bool) var_10)) ? (10183886193633331283ULL) : (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (short)23814)) ? (((/* implicit */long long int) var_8)) : (var_0))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) max((((/* implicit */unsigned int) ((short) arr_0 [i_0 - 2]))), (((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (var_4)))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)95)))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (7210573658965847250LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */unsigned int) 1513635765)) : (arr_0 [i_0])));
        var_14 += ((/* implicit */short) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_1]))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-15406)), (arr_0 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [4])) ? (arr_3 [i_1]) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */int) (_Bool)1))))) : (max((9086859073233395209LL), (((/* implicit */long long int) arr_1 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) var_6);
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)146)) > (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_13 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) min((arr_4 [i_2 + 1] [i_2 - 1]), (((/* implicit */unsigned short) arr_10 [i_1]))))) ? ((~(min((((/* implicit */int) var_2)), (1851896348))))) : (((/* implicit */int) arr_9 [9ULL] [9ULL] [i_3])));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (short)-11345))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_2] [i_1]) ? (var_0) : (4470571958971857095LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)11285))))) : (13584822213733129663ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_3]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [13LL] [13LL] [i_3])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)11))))) ? (max((((/* implicit */long long int) 31)), (7210573658965847250LL))) : (4470571958971857095LL)))));
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_19 += ((/* implicit */_Bool) 7210573658965847250LL);
                arr_17 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [13U] [13U])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])) : (((((/* implicit */int) arr_15 [i_2] [i_2 - 1] [i_2 - 1])) * (((/* implicit */int) max((var_10), (arr_10 [i_4]))))))));
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (31)))) : (3235424848U)));
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        arr_22 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(5659712921731641004ULL)))) ? (((((/* implicit */_Bool) arr_12 [i_6] [i_4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26864))) : (12787031151977910611ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [i_4] [i_6 - 1] [(_Bool)1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) (_Bool)1))))))) : (arr_7 [i_1] [i_4] [i_6])));
                        var_21 ^= ((/* implicit */_Bool) (~(25U)));
                        var_22 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8484)) >= (((/* implicit */int) arr_1 [i_1]))))), (arr_14 [i_4]));
                    }
                    for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_26 [i_1] [i_1] [i_2] [i_4] [i_4] [i_7] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_25 [i_1] [i_2] [i_2] [i_5] [i_4] [i_2])) ? (arr_7 [(unsigned char)7] [i_1] [i_4 - 1]) : (min((((/* implicit */long long int) arr_15 [i_4] [i_5] [i_5])), (arr_7 [i_1] [i_2] [i_7]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_2] [i_4 - 1] [i_5] [i_7] [i_7])) ? (arr_24 [i_1] [i_2 + 1] [i_1] [i_4] [i_2 + 1] [i_7] [i_1]) : (((/* implicit */unsigned int) ((var_8) + (((/* implicit */int) (short)(-32767 - 1)))))))))));
                        var_23 = arr_9 [i_1] [i_1] [i_1];
                        arr_27 [i_4] [i_2] [i_4] [i_4] [i_4] = min((max((((/* implicit */int) (unsigned char)36)), (-330634496))), ((~(arr_3 [i_2]))));
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_24 [i_4] [i_4] [10ULL] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (short)11285)) : (((/* implicit */int) (short)11285))))) : (-8845738245574111834LL))), (max((((/* implicit */long long int) arr_15 [i_2 - 1] [i_2 - 1] [i_4 - 1])), (657214589548448826LL)))));
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */short) (-(max((((arr_30 [i_1] [i_1] [i_1] [i_4]) ? (((/* implicit */int) arr_23 [i_1] [i_4] [i_4] [i_1])) : (((/* implicit */int) (unsigned char)161)))), ((~(((/* implicit */int) (unsigned char)146))))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((int) ((arr_18 [(_Bool)1] [i_5] [i_5] [i_1]) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_1]))) < (arr_7 [i_1] [i_8] [i_1]))))))))));
                        var_26 = ((/* implicit */int) ((unsigned short) arr_15 [i_1] [i_1] [1]));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_9 = 3; i_9 < 13; i_9 += 3) 
                    {
                        var_27 ^= ((/* implicit */int) ((unsigned short) min((((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1])) ? (arr_7 [i_9 - 2] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [2] [i_2] [i_5]))))), (((/* implicit */long long int) arr_33 [i_1] [i_1] [i_1] [i_1] [3LL])))));
                        var_28 = ((/* implicit */unsigned int) -2129002689);
                        var_29 = 1976244022;
                    }
                    arr_34 [i_1] [i_2] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((3645095356U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))));
                }
                for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) max((var_3), (arr_18 [i_2] [i_1] [i_1] [i_2])))) ? (((((/* implicit */_Bool) ((int) arr_24 [i_1] [i_1] [i_2] [i_4] [i_4] [i_1] [i_10]))) ? ((+(arr_18 [(short)6] [(short)6] [i_1] [(short)6]))) : (((/* implicit */int) ((short) arr_7 [i_4] [i_4] [i_4]))))) : (((/* implicit */int) ((short) (~(-332646574379900298LL)))))));
                    var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) arr_0 [9U]))) ? (((/* implicit */unsigned int) max((arr_29 [i_10] [i_10] [i_4]), (((/* implicit */int) arr_23 [i_1] [i_4] [i_1] [i_1]))))) : (max((arr_11 [i_1] [i_2] [i_2] [i_10]), (((/* implicit */unsigned int) arr_1 [i_1])))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)114)), (1788437988)))) ? (((/* implicit */int) (short)12614)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_4] [(_Bool)1] [i_10])) || (((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_4] [i_1]))))))))));
                }
                arr_37 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (min((16216050841084700423ULL), (((/* implicit */unsigned long long int) 1903235520)))) : (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_2 + 2] [i_4])))) : (((/* implicit */unsigned long long int) var_8))));
            }
        }
    }
    for (int i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        var_32 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_20 [12] [12] [i_11] [i_11] [i_11] [i_11] [i_11])) - (((/* implicit */int) arr_12 [i_11] [i_11] [i_11]))))));
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-23163)) || (((/* implicit */_Bool) (short)-8881))));
        var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_33 [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_33 [i_11] [i_11] [i_11] [i_11] [i_11])))) ? (max((7ULL), (((/* implicit */unsigned long long int) arr_18 [i_11] [i_11] [(unsigned short)6] [i_11])))) : (((/* implicit */unsigned long long int) (~(arr_18 [i_11] [6] [6] [i_11]))))));
    }
    var_35 = ((/* implicit */int) ((short) var_6));
}
