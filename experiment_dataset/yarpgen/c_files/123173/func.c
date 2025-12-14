/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123173
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
    var_15 = ((/* implicit */unsigned short) (+((+(var_13)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_2] &= ((/* implicit */int) var_8);
                    var_16 = ((long long int) (short)-19915);
                }
            } 
        } 
        arr_10 [i_0] |= ((/* implicit */short) (!(arr_4 [i_0])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                arr_16 [i_3] [i_3] = ((/* implicit */_Bool) arr_14 [i_0]);
                var_17 = ((/* implicit */_Bool) max((var_17), (arr_4 [i_4])));
                arr_17 [i_3] = ((/* implicit */int) (-(arr_11 [i_0] [i_3] [i_3 - 2])));
                var_18 = ((/* implicit */_Bool) max((var_18), ((_Bool)1)));
            }
            for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
            {
                arr_22 [i_3 - 3] [i_3] [i_3 + 1] = ((/* implicit */unsigned short) var_3);
                arr_23 [i_0] [i_3] [i_5 + 3] = ((/* implicit */int) arr_20 [i_3]);
                arr_24 [14] [i_3] [i_5 + 2] = ((/* implicit */unsigned long long int) (short)3193);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) (short)32767);
                            var_20 |= ((_Bool) arr_30 [i_0]);
                            arr_32 [i_0] [i_3] = ((/* implicit */short) arr_27 [i_0] [i_3 - 2] [i_3] [i_5 + 2] [i_6] [i_7]);
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_12))));
                            arr_33 [i_3] [i_3] [i_3 - 2] [i_3] [i_3] [i_3] [i_3] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
            arr_34 [i_3] [i_3 - 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_3 - 3] [i_3 + 1]))));
            var_22 = (+(((/* implicit */int) var_8)));
            /* LoopNest 2 */
            for (short i_8 = 1; i_8 < 12; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    {
                        arr_40 [i_3] [i_8 + 1] [i_9] = ((/* implicit */long long int) (+((~(18271628529721372612ULL)))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_3] [i_3 + 1] [i_3 + 1] [(_Bool)1] [(unsigned char)14] [i_3 - 3] [i_3])) & ((+(((/* implicit */int) var_8)))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((_Bool) arr_29 [i_3 - 3] [i_3] [i_3 - 2] [i_3] [i_8 - 1]));
                    }
                } 
            } 
            arr_41 [i_0] [i_3] [i_3 - 3] = ((/* implicit */unsigned long long int) arr_30 [i_0]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_10] [i_0] [i_0] [i_0]))));
            arr_44 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_10] [i_10] [i_10] [i_0]))));
            var_26 = ((/* implicit */long long int) ((signed char) arr_20 [i_10]));
            var_27 |= (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])));
            var_28 = ((/* implicit */unsigned short) (~(var_13)));
        }
    }
    var_29 &= ((/* implicit */short) var_12);
    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) (-(var_7)))), ((-(16648931790651670602ULL))))) > (((/* implicit */unsigned long long int) var_6)))))));
    /* LoopSeq 1 */
    for (long long int i_11 = 1; i_11 < 22; i_11 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) (-((+(var_2)))));
        arr_47 [i_11] [i_11] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_46 [i_11]))))), ((+(var_10)))))));
    }
}
