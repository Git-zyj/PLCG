/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115244
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (max((((unsigned long long int) 3443573086506518038ULL)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)241)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_17 *= ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_2]);
                            arr_10 [i_0] [i_1] [i_0] [i_0 - 1] = ((/* implicit */int) (!(((((/* implicit */_Bool) ((unsigned char) 1914257092))) || ((!(((/* implicit */_Bool) 3443573086506518025ULL))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (int i_5 = 4; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 + 1]))))) || (((((/* implicit */int) arr_13 [i_5 - 4] [i_0 + 3])) != (((/* implicit */int) (unsigned char)112))))));
                            arr_16 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_0] [(unsigned short)5] [i_0] [i_5]))));
                            var_19 = ((/* implicit */int) min((((/* implicit */long long int) (+(arr_3 [i_5] [i_0 + 3] [i_5 - 4])))), (min((max((((/* implicit */long long int) arr_14 [i_5 - 1] [i_4] [i_0] [i_0])), (arr_11 [i_5] [i_0 + 3] [i_5 + 1] [i_0 + 3]))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_4] [i_5])) & (-617716212))))))));
                            arr_17 [i_1] [i_1] [i_1] [5ULL] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)36)) && (((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)12)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))) ? (((/* implicit */int) min((arr_6 [i_4]), (arr_6 [i_0 - 3])))) : (((((((int) arr_11 [i_0] [i_1] [i_1] [i_5])) + (2147483647))) >> (((max((((/* implicit */unsigned int) var_12)), (1327667469U))) - (1327667439U)))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_0])), (var_9)))) && (((/* implicit */_Bool) arr_6 [i_5 - 1])))))) <= (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) / (4445043225176397162ULL))) * (((/* implicit */unsigned long long int) ((arr_13 [i_0 - 4] [i_0]) ? (((/* implicit */int) arr_4 [(short)7])) : (((/* implicit */int) (_Bool)0)))))))));
                        }
                    } 
                } 
                arr_18 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_0] [7LL] [i_0] [(signed char)6]) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)125)) | (((/* implicit */int) (unsigned char)236)))))))) ? ((+(arr_3 [i_0 - 4] [i_0 - 4] [i_0]))) : (((/* implicit */int) ((signed char) max((2110715765), (((/* implicit */int) arr_4 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (int i_8 = 2; i_8 < 21; i_8 += 4) 
            {
                {
                    arr_26 [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) arr_24 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]);
                    var_21 ^= ((/* implicit */int) 1665099144U);
                    arr_27 [i_6] [i_7] [i_8 - 1] [i_7] = ((/* implicit */unsigned short) arr_25 [i_6] [i_6] [i_6] [i_6]);
                }
            } 
        } 
    } 
}
