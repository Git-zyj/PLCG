/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164967
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
    var_11 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)25574)) || (((/* implicit */_Bool) 4063825084418864477LL)))))) : (((((/* implicit */_Bool) 4063825084418864505LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2997365946452329824LL)) && ((_Bool)1))))) : (arr_0 [(unsigned char)15])))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4063825084418864477LL)) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_3 [i_0] [8ULL] [i_0 + 2]))))) ? (((/* implicit */unsigned long long int) -4063825084418864477LL)) : ((+(((((/* implicit */_Bool) (unsigned short)38602)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_13 |= ((/* implicit */int) (signed char)36);
                    arr_12 [i_2] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4063825084418864477LL)))))) : ((~(4063825084418864448LL)))))) ? (((/* implicit */long long int) (+(((int) arr_9 [i_0] [i_0]))))) : (max((((/* implicit */long long int) (unsigned short)22944)), (4063825084418864476LL)))));
                    var_14 = ((/* implicit */short) arr_4 [i_0 - 1] [i_2]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 17; i_3 += 2) 
    {
        for (unsigned char i_4 = 4; i_4 < 17; i_4 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_4)), (12051027759323544038ULL))) | (min((arr_17 [i_3 + 1] [10ULL] [i_4 + 1]), (arr_17 [i_3] [i_4 - 1] [i_3 - 2])))));
                var_16 = ((/* implicit */unsigned short) (short)23535);
                var_17 = ((/* implicit */unsigned char) -4063825084418864477LL);
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [3ULL] [i_4] [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2])))))) ? (max((((/* implicit */long long int) (signed char)126)), (4063825084418864478LL))) : (((/* implicit */long long int) min((((/* implicit */int) arr_14 [i_3 - 1])), (arr_15 [(signed char)10] [i_4])))))), (((/* implicit */long long int) arr_0 [(signed char)15])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_5))))) & (((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    var_20 = (signed char)-37;
}
