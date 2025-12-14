/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13078
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) ((_Bool) (unsigned short)65535)))));
        var_21 *= (_Bool)0;
        var_22 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)24434)))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (var_16))) % (((/* implicit */int) (unsigned short)65535)))))));
        var_24 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_25 *= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_11)));
                        var_26 = max(((-(((/* implicit */int) arr_13 [i_1] [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3])))), (((((/* implicit */_Bool) arr_12 [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_13 [i_2] [i_3 + 3] [i_3 - 1] [i_3 - 1] [i_4])) : (((/* implicit */int) arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 2])))));
                        var_27 = ((/* implicit */int) min((var_27), ((((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((max(((_Bool)1), ((_Bool)0))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -44980849)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))))));
                    }
                } 
            } 
        } 
        var_28 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_15 [i_1]) >= (arr_15 [i_1])))) + (((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) (unsigned short)23878)))) : (var_5)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_29 *= ((/* implicit */_Bool) arr_16 [(_Bool)1]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_30 *= (((-(((/* implicit */int) arr_21 [i_7 + 1] [i_6] [i_5])))) & (((((((/* implicit */_Bool) arr_17 [i_5] [14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [(_Bool)0])) && (((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5]))))))));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~((+(((/* implicit */int) var_11)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            var_32 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [(unsigned short)8]))));
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [(unsigned short)6])) + (((/* implicit */int) arr_16 [(_Bool)1])))))));
            var_34 = (~(((/* implicit */int) arr_19 [i_5] [i_8] [(_Bool)1])));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_35 *= ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (_Bool)0)));
            var_36 *= ((((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */int) arr_26 [i_9 - 1] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) var_3))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))));
        }
        var_37 *= ((/* implicit */int) ((var_8) > ((~(arr_17 [i_5] [8])))));
    }
    var_38 *= ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (var_16)));
}
