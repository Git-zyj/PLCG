/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131088
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
    var_13 ^= ((/* implicit */unsigned long long int) ((((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (var_7)));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)124)) < (((int) min((var_1), (((/* implicit */unsigned long long int) 5024569568740066947LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) * (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)20178))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 848332233652657914LL)), (arr_4 [4ULL] [18LL] [i_0])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [16U]))))) : ((-(arr_4 [(unsigned short)4] [i_1] [i_1])))))))));
                var_16 = (i_0 % 2 == zero) ? (((unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_4 [i_0] [i_0] [i_0]))) >> (((((((/* implicit */_Bool) (short)-24011)) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 4213691042U)))) - (8964353684663114936ULL)))))) : (((unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_4 [i_0] [i_0] [i_0]))) >> (((((((((/* implicit */_Bool) (short)-24011)) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 4213691042U)))) - (8964353684663114936ULL))) - (10205985144988438156ULL))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)105))))), (arr_4 [i_0] [i_0] [i_0 + 1])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned short)6])) && ((_Bool)1))) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = max((-2596119707782859277LL), (((/* implicit */long long int) ((unsigned char) 369634902911822028LL))));
                                var_19 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_0] [i_4]))))) % (((arr_4 [i_0] [i_2] [0ULL]) / (((/* implicit */unsigned long long int) arr_12 [i_4])))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_4] [(short)14])) : (2552478646155593924ULL)))))));
                                var_20 = ((/* implicit */unsigned char) min((((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_1])), (arr_1 [i_0])))) && (((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [i_0] [i_4]), (((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_3]))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (long long int i_7 = 2; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_7] [i_5] [i_6] [i_7])) ? (((((/* implicit */_Bool) 15652678974684167948ULL)) ? (((/* implicit */int) (unsigned short)45358)) : (((/* implicit */int) (short)-28230)))) : (((/* implicit */int) arr_0 [i_7]))));
                                var_22 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) & (arr_5 [i_0]))), (((unsigned long long int) arr_5 [i_0]))));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (short)28245))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        for (long long int i_9 = 1; i_9 < 15; i_9 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_14 [i_10] [i_9 + 4] [i_11 + 2] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (848332233652657914LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)28229)) > (((/* implicit */int) arr_24 [i_11 + 1])))))));
                                var_25 = ((/* implicit */unsigned int) ((unsigned long long int) (+(max((((/* implicit */unsigned long long int) 2361779415553184440LL)), (6271269386858157821ULL))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    for (signed char i_14 = 2; i_14 < 18; i_14 += 3) 
                    {
                        {
                            arr_39 [i_8] [i_8] [i_14] [i_14] [i_14] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)26021)), (((max((-2813140904105069836LL), (-2361779415553184441LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_14] [i_14 - 1] [i_9 + 2] [i_14])))))));
                            arr_40 [i_8] [i_8] [i_9] [i_13] [i_14] [i_14] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_19 [i_8] [i_9 + 3] [i_9] [i_9 + 2] [(signed char)16] [i_14 - 1]) ? (((/* implicit */int) arr_19 [i_8] [i_9 + 3] [i_9] [i_9 + 2] [i_9] [i_14 - 1])) : (((/* implicit */int) arr_19 [i_8] [i_9 + 3] [(unsigned short)20] [i_9 + 2] [i_13] [i_14 - 1]))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15894265427553957663ULL))))), ((+(arr_4 [i_14] [i_14] [i_14])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 2; i_16 < 16; i_16 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned int) min((arr_24 [i_9 + 4]), ((_Bool)1)));
                            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) + (arr_12 [i_15])));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_10 [4ULL] [i_9] [(short)14] [i_16]))));
                        }
                    } 
                } 
                arr_47 [i_8] [i_8] [i_8] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) 2434118636U)), (arr_45 [i_9] [i_9 + 2] [i_9] [i_9]))), (((/* implicit */unsigned long long int) ((((arr_17 [i_8] [i_8] [8U] [8U]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54161))))) ? ((+(((/* implicit */int) (unsigned short)35743)))) : (((/* implicit */int) ((unsigned char) arr_23 [i_8] [i_8] [i_9] [i_8]))))))));
            }
        } 
    } 
}
