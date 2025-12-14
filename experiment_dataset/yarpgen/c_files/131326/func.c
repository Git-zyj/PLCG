/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131326
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
    var_15 = ((/* implicit */signed char) 13397370165131860195ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 1])), (8299376212105401203ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))) | (((/* implicit */unsigned long long int) max((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */int) (short)29115)))))));
                arr_6 [i_0] = ((/* implicit */signed char) 10147367861604150412ULL);
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])) & (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 326618023U)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))))) : ((~(18138497443871976527ULL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_3] = (+(17290811799207211581ULL));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        arr_18 [i_5 + 2] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_3]))))) ^ (((((/* implicit */_Bool) 5049373908577691420ULL)) ? (((/* implicit */unsigned long long int) 3968349272U)) : (12460326167397702603ULL)))));
                        arr_19 [i_3] [i_3] = arr_16 [i_2] [i_2] [i_2] [i_2];
                    }
                    for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_16 += ((/* implicit */short) (unsigned char)185);
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-29116)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)25246)) : (-1165535438)));
                            var_19 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) min((arr_15 [i_2] [i_3] [i_4] [i_4]), (((/* implicit */short) arr_25 [i_3]))))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_23 [i_7] [i_6] [i_4] [i_3] [i_2 - 1])))))));
                            arr_26 [i_7] [i_6] [i_3] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((7983894024152052978ULL) + (11ULL)))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_6] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) : (arr_21 [i_7] [i_4] [i_3] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_2 - 2] [i_3] [i_3] [i_7])) != (arr_10 [i_6] [i_7])))))))));
                        }
                        var_20 += ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
                        arr_27 [i_3] [i_3] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_3 [i_3] [i_2 + 1] [i_3])), (13397370165131860209ULL))), (((/* implicit */unsigned long long int) ((_Bool) 3417570432138051663ULL)))));
                    }
                }
            } 
        } 
    } 
}
