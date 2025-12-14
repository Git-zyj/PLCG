/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184050
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
    var_13 = ((/* implicit */long long int) (-((((~(305268885U))) & ((-(var_7)))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_1] [i_2] [i_3] [i_3])), (arr_13 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0])))) ? (((arr_11 [i_1] [i_1] [i_1]) & (arr_11 [i_1] [i_4] [i_2]))) : (((/* implicit */unsigned long long int) min((arr_10 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0]), (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_2] [i_4])))))));
                                var_16 = ((/* implicit */_Bool) arr_0 [i_0]);
                                var_17 = ((max((arr_14 [i_4] [i_1] [i_4] [i_4] [i_4] [(unsigned char)2]), (arr_14 [i_0] [i_1] [i_0] [i_0] [(_Bool)1] [i_0]))) / (((int) 3989698411U)));
                                arr_17 [i_0] [i_3] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_1]);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 43509010U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((((/* implicit */long long int) var_0)), (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]))))))));
                    arr_19 [i_0] [(_Bool)1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)123)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_1] [7ULL] [i_2])))))) : (arr_11 [i_1] [i_2] [i_2]))), (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) % (var_9))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-116))))))))));
                }
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [i_0] [i_0] [16U] [i_1]) | (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) min((max((3989698419U), (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) var_0))))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_9 [2] [2] [i_6 - 1] [i_6 - 1]))));
                            arr_27 [i_0] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((var_1) * (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_6 + 1] [i_6 - 1] [i_0] [(_Bool)1])))))));
                            arr_28 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */int) ((((_Bool) min((arr_5 [i_1] [i_5]), (arr_3 [i_1] [i_5])))) ? (((/* implicit */long long int) 3989698400U)) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_5] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (arr_9 [i_1] [i_1] [i_6] [i_6])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_12)) : (arr_10 [i_0] [i_0] [i_1] [i_5] [(_Bool)1] [i_6])))))));
                            var_20 = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_1] [i_5] [10U]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (-(((((arr_6 [i_0] [i_1] [i_7] [i_8]) && (((/* implicit */_Bool) var_9)))) ? (arr_31 [i_8] [i_8 + 1] [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_0] [i_0]))))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_1 [i_0]))));
                            var_23 = ((((/* implicit */_Bool) ((max((11808472006118253834ULL), (((/* implicit */unsigned long long int) arr_30 [i_0] [i_1] [i_7])))) & (((/* implicit */unsigned long long int) ((268435424LL) & (((/* implicit */long long int) 305268877U)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_8]))))) ? (((/* implicit */int) (unsigned char)251)) : (min((((/* implicit */int) (unsigned short)16383)), (var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_8 + 1] [i_8 + 1] [i_1])) || (((/* implicit */_Bool) arr_31 [i_8 + 2] [i_8 + 1] [i_1]))))));
                            var_24 = ((/* implicit */unsigned int) (-(arr_11 [i_1] [i_1] [i_1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
