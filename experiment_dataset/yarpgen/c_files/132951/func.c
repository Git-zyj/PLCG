/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132951
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
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_2])) ? ((~(((/* implicit */int) arr_3 [i_0 + 3] [i_1])))) : (((/* implicit */int) arr_5 [i_0 - 2] [(unsigned char)8]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned char)218), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */int) arr_3 [i_0] [i_1])) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 1]))))));
                        arr_10 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) var_7);
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((var_9) <= (var_9))))));
                        arr_11 [i_0] [(unsigned char)14] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned char)49), (arr_1 [i_0 - 3]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) min((var_14), (((/* implicit */signed char) var_15))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) ((arr_9 [i_5]) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))));
                    var_22 = (!(((/* implicit */_Bool) var_5)));
                }
                for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    arr_22 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_23 [i_4] [i_5] [i_5] = ((/* implicit */signed char) 5499985034642835318ULL);
                    var_23 = ((/* implicit */signed char) min((var_23), ((signed char)-77)));
                    var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_14)) ? (((9539862066842749225ULL) * (arr_19 [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)240))))))), ((-(((arr_13 [i_4]) ^ (17381034966534582049ULL)))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_9))));
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) (_Bool)1);
                    arr_30 [i_8] [i_9 - 1] [i_9 - 1] [i_8] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((4194303ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(signed char)0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_4)), (var_16)))))))));
                }
            } 
        } 
    } 
}
