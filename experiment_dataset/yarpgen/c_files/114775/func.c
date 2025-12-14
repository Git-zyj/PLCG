/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114775
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    var_13 += (-(arr_6 [(unsigned short)0] [(unsigned short)0]));
                    arr_10 [i_0] [i_2] [i_2] [1U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? ((+(((/* implicit */int) ((1656670734) < (((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((/* implicit */int) arr_8 [i_0] [i_0] [0U] [0U]))));
                    var_14 = ((/* implicit */short) arr_9 [i_2]);
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) (((-(-4911827813922094782LL))) / ((-(4911827813922094762LL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */short) arr_5 [i_3]);
        arr_15 [(unsigned short)11] [i_3] = ((/* implicit */unsigned short) arr_8 [i_3] [i_3] [i_3] [i_3]);
        var_15 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3]))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_16 [(_Bool)1]) : (arr_12 [i_3] [(short)11])))) ? ((~(((/* implicit */int) arr_2 [i_3] [i_3])))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (_Bool)0))))) ? (12579145407094648115ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)21596))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3] [i_4])) ? (arr_16 [i_3]) : ((+(1981798759473703106LL))))))));
            arr_20 [i_3] [i_3] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-(((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned long long int) arr_19 [0])) : (7606584559594782192ULL))))) : (((((/* implicit */_Bool) arr_12 [i_4] [i_3])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) : (arr_3 [i_4])))) : (((((/* implicit */_Bool) arr_17 [i_3] [i_3])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_3])))))))));
            var_17 *= (+(((((/* implicit */_Bool) (unsigned short)33554)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)12))))) : (((((/* implicit */_Bool) arr_17 [i_3] [5ULL])) ? (11032909086935952226ULL) : (arr_7 [i_3] [i_3] [3]))))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+((-(475096643U)))))) / ((+((+(-6208059458175462152LL)))))));
        }
    }
}
