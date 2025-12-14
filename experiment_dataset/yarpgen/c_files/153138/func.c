/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153138
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max(((~((~(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (0LL))))) == (arr_3 [i_0] [(unsigned char)0]))))));
                var_12 |= ((/* implicit */short) ((((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_0])))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)150)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_14 = ((/* implicit */int) arr_1 [i_2]);
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) arr_0 [i_2]))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = arr_2 [i_2];
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_17 -= ((signed char) ((_Bool) arr_9 [i_2] [i_3] [i_4]));
                arr_11 [i_4] [i_3] [i_3] [3ULL] = ((/* implicit */long long int) arr_4 [i_2]);
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (7586331278333275860ULL)))) ? (7586331278333275870ULL) : (10860412795376275756ULL)))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_8 [i_2] [i_3] [i_3] [i_3])), (var_0))), (((/* implicit */unsigned int) var_1))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))) : (7586331278333275860ULL)))))));
                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_8 [i_2] [i_2] [i_3] [i_4]), (((/* implicit */unsigned short) (unsigned char)144)))))));
            }
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_14 [i_2] [i_3] [i_6 - 1]))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_5])) <= ((-(10860412795376275746ULL))))))));
                        var_20 -= ((/* implicit */unsigned char) (-((~(arr_5 [i_6 + 3] [i_2])))));
                        var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((_Bool) (signed char)75))) : (((/* implicit */int) (((+(10860412795376275756ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32220)) ? (var_9) : (((/* implicit */long long int) var_10))))))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((7586331278333275870ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        arr_17 [i_3] [15LL] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_6 - 2]), (arr_2 [i_6 - 1])))) ? (((((/* implicit */_Bool) arr_2 [i_6 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) : (arr_2 [i_6 - 1]))) : (max((arr_2 [i_6 + 3]), (arr_2 [i_6 + 2])))));
                    }
                } 
            } 
        }
    }
}
