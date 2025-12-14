/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180538
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
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 |= ((/* implicit */unsigned long long int) ((860987384U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))));
                arr_4 [i_0] = (+(((/* implicit */int) var_9)));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_8 [i_0] = ((/* implicit */long long int) (~(var_4)));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_9);
                    var_15 = ((/* implicit */_Bool) 1443308742U);
                }
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    var_16 = ((/* implicit */int) max(((+(3433979910U))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27224))))) ? (((var_10) ? (680176318U) : (3857446135U))) : (max((1443308742U), (((/* implicit */unsigned int) (signed char)-64))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3857446135U)));
                        arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 2871820864U);
                    }
                    var_17 = ((/* implicit */unsigned short) var_12);
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    arr_19 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) <= (551365753)));
                    arr_20 [i_0] [i_1] |= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_1])) & ((~(((/* implicit */int) (short)19486)))))) << (((max(((~(arr_18 [i_5] [i_1] [i_5]))), (((/* implicit */long long int) max((((/* implicit */short) arr_5 [i_0] [(short)6] [i_1] [i_5])), ((short)19486)))))) - (7907452579143336667LL))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 15; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_19 -= 962677547U;
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_25 [i_8 - 1] [i_7 + 1] [i_8 - 2])) == (max((6929177934237275907ULL), (11196333907003918563ULL))))))));
                        }
                    } 
                } 
                var_21 = min((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (unsigned short)6676)))) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)119)) && (((/* implicit */_Bool) 3433979911U)))))))), ((((-(3857446155U))) + (arr_7 [i_6] [7LL] [i_7 + 1] [i_7 + 1]))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (max((1423146431U), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    var_23 = ((/* implicit */unsigned int) var_9);
}
