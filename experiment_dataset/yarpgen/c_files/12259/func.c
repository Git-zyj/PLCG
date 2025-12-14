/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12259
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
            arr_8 [i_0] [9ULL] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [(signed char)12]))))) + (((3425692143U) >> (((max((3425692143U), (((/* implicit */unsigned int) -1188495597)))) - (3425692129U)))))));
        }
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                {
                    var_18 -= ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))), (((/* implicit */unsigned long long int) 869275153U))))));
                    arr_14 [i_0] [(signed char)18] [i_0] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 1])) || (((/* implicit */_Bool) (-(arr_1 [3ULL])))))) || (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) 869275153U))))))));
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [2] [14])) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
            {
                {
                    arr_20 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) 863972086);
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((int) ((((/* implicit */int) (signed char)-106)) | (((/* implicit */int) arr_12 [i_0] [(unsigned char)11]))))));
                }
            } 
        } 
    }
    var_20 += ((/* implicit */short) var_13);
    var_21 = ((/* implicit */int) (((((+(((/* implicit */int) (signed char)-71)))) != ((+(((/* implicit */int) var_8)))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (7ULL))))) == (var_11)))))));
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (signed char)105);
                    var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */unsigned long long int) arr_0 [i_6])) : (var_12))), (((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6] [i_6]))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_8] [i_8] [i_8] [i_7])) ? (((/* implicit */int) arr_21 [i_6] [i_7])) : (arr_18 [i_8])))), (arr_0 [(signed char)18]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_6])))));
                }
            } 
        } 
    } 
}
