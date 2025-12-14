/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153467
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
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned char) max((var_1), ((!(((/* implicit */_Bool) var_12))))))), (((unsigned char) 11812582366653627243ULL))));
    var_18 += ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0])))) : ((-(var_14)))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_20 += ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) (short)-6012)))));
                        var_21 = ((/* implicit */short) min((((signed char) -1734240225)), (((signed char) var_8))));
                        arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) ((unsigned short) ((short) (unsigned char)244)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_4 = 3; i_4 < 22; i_4 += 3) 
            {
                var_22 = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25733))) == (min((var_8), (var_8)))))));
                arr_15 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) ((long long int) (unsigned short)7539));
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */short) max((var_0), (((/* implicit */unsigned long long int) min((-1729221035), (((/* implicit */int) (!(((/* implicit */_Bool) 10611519985797245438ULL))))))))));
            }
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                arr_21 [i_5] [i_1] [i_1] [1] = ((/* implicit */int) ((unsigned short) var_16));
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])) ? (2147483647) : (((/* implicit */int) var_1)))))));
            }
            arr_22 [i_1] [i_1] = ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_0]))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0])))));
            var_24 = var_10;
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                arr_25 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)7539))));
                arr_26 [i_6] [i_1] [i_6] [i_6] = ((/* implicit */unsigned int) (unsigned short)7523);
            }
        }
        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 2) 
        {
            var_25 += (((!(((/* implicit */_Bool) arr_5 [i_0] [i_7 - 2] [i_7 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_7 - 2] [i_7] [i_7 + 2]))))) : ((-(((/* implicit */int) arr_6 [i_7 - 1])))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_26 ^= ((/* implicit */signed char) 3601913124751028221ULL);
                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) (short)-6006))))))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    var_28 ^= ((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (((short) var_5))));
                    var_29 = ((/* implicit */int) var_3);
                }
                var_30 = arr_7 [i_0] [i_0] [i_0] [5ULL] [i_7 + 1] [i_8];
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_36 [i_0] [i_0] [i_10] [i_10] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                var_31 = ((/* implicit */unsigned short) min((var_31), (var_13)));
                arr_37 [i_0] = ((/* implicit */int) (_Bool)1);
            }
            var_32 = ((/* implicit */unsigned short) var_14);
        }
    }
}
