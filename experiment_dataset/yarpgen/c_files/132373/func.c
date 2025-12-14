/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132373
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) (+(min((19ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (_Bool)1)))))))));
                var_16 = ((/* implicit */unsigned short) ((unsigned int) (~(arr_3 [i_0]))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_9)) ? (arr_1 [(signed char)9]) : (arr_1 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_7) : (arr_3 [16])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 1272577509))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))) : ((+(arr_3 [i_1])))));
                arr_4 [i_0] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((5717092785089016588ULL), (((/* implicit */unsigned long long int) (unsigned short)58375))))) ? (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)15] [i_0])))) : (((/* implicit */int) var_14))));
            }
        } 
    } 
    var_18 = ((long long int) min((max((var_5), (((/* implicit */unsigned int) (unsigned short)38500)))), (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (var_10))))));
    var_19 += ((/* implicit */short) (+(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_1 [3]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))))))));
                var_21 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_2 [i_3 - 1])))), (((((/* implicit */int) (short)-15615)) / (((/* implicit */int) (short)15618))))));
                arr_11 [i_3] [4U] = ((/* implicit */int) min((((/* implicit */unsigned short) (short)-15615)), ((unsigned short)38509)));
            }
        } 
    } 
}
