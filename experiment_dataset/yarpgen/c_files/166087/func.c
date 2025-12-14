/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166087
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) var_2);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) (~(max((((/* implicit */int) (unsigned char)0)), (((arr_3 [i_0] [i_0 + 2]) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (short)27565))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) -4269642891892027384LL))) != (((((((/* implicit */_Bool) -1904932497)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (short)6310)))) >> (((arr_8 [i_3] [i_3] [i_2] [i_1 - 1]) - (1314076453808958126LL)))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((max((arr_8 [i_2 + 2] [i_2] [i_0] [i_0]), (arr_8 [i_2 - 1] [i_2 + 2] [i_2] [i_1 + 2]))) | (arr_8 [i_2 - 1] [i_1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    var_22 &= ((_Bool) (-(((((/* implicit */_Bool) 0U)) ? (arr_1 [i_0 - 1] [i_1]) : (((/* implicit */long long int) 15360U))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_23 = max((((/* implicit */unsigned int) arr_14 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6 + 1])), (((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6 - 1] [i_5] [i_6] [i_6])) ? (2472326931U) : (var_9))));
                                arr_18 [i_5] [i_5] [i_2] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) min((var_8), (((unsigned short) (!(((/* implicit */_Bool) 1822640365U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 2; i_8 < 21; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 2) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned int) ((var_3) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((1822640333U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0]))))), (((arr_1 [i_9 + 1] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9 + 1] [i_8] [i_0] [i_7] [i_0 + 1] [i_0]))))))))));
                        var_25 = ((/* implicit */long long int) var_2);
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))))) == (((3962255148U) << (((((/* implicit */int) (unsigned char)255)) - (238)))))));
                        arr_27 [i_9] = min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_8 - 1] [i_9 + 3] [i_0 + 1])) - (((/* implicit */int) arr_5 [i_0 + 2] [i_8 - 1] [i_9 + 2] [i_0 + 2]))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (var_12) : (arr_10 [i_0 + 2] [i_8 + 1] [i_9]))));
                    }
                } 
            } 
            arr_28 [i_0] [i_0] = ((/* implicit */_Bool) (((~((~(((/* implicit */int) (unsigned short)43937)))))) << ((((~((~(arr_8 [i_0] [i_7] [i_0] [i_0]))))) - (1314076453808958146LL)))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_27 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_15 [i_0 - 2] [i_0]) + (var_9)))) ? (((((/* implicit */_Bool) 6628580872670402804ULL)) ? (3962255150U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_10]))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])))))))));
            arr_31 [i_0 + 1] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_16)), (var_6)));
            var_28 = ((/* implicit */_Bool) (unsigned short)65535);
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) arr_38 [i_0] [i_10] [i_0] [i_12 - 1] [i_13]);
                            arr_42 [i_0] [i_0] [i_11] [i_11] [i_12] [i_13] [i_13] = ((/* implicit */long long int) ((unsigned int) var_13));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) 7U))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 21; i_14 += 3) 
            {
                for (unsigned int i_15 = 2; i_15 < 21; i_15 += 3) 
                {
                    {
                        arr_50 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_11 [i_0 + 2] [i_0 + 1] [i_14 + 1] [i_15 - 1])) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) ((unsigned long long int) var_1))))))));
                        var_31 += ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) > (arr_38 [i_15 - 1] [i_15 - 2] [i_0 + 2] [i_15 - 2] [i_0])));
                    }
                } 
            } 
        }
    }
    var_32 = ((/* implicit */unsigned long long int) min((min((((unsigned short) var_9)), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) == (1167911938U)))))), (((/* implicit */unsigned short) (_Bool)0))));
}
