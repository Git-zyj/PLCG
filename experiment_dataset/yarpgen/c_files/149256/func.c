/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149256
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) arr_0 [i_1] [i_0]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) var_8);
                    var_19 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) var_8)))) <= ((((~(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_11))))));
                    var_20 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned char) var_1))), (((arr_6 [i_1 - 3] [2]) << (((((/* implicit */int) var_7)) - (1)))))));
                }
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) 6003512153807834626LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)53738)))), (((/* implicit */int) arr_3 [i_0] [i_3 + 1])))))));
                    var_22 = (!(((arr_0 [(unsigned short)4] [i_0]) || (((/* implicit */_Bool) (signed char)14)))));
                    var_23 = ((/* implicit */unsigned int) var_15);
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */int) var_1)), ((+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-105)), ((unsigned char)111))))))));
    /* LoopNest 3 */
    for (signed char i_4 = 3; i_4 < 21; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_25 &= ((/* implicit */_Bool) ((int) ((short) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_13 [(unsigned short)20]))))));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */long long int) min((((unsigned int) arr_11 [i_7] [(signed char)19])), (((/* implicit */unsigned int) var_8))))) <= (max((arr_15 [8U]), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))))))));
                                var_27 = ((/* implicit */int) arr_23 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 3] [i_4] [2U]);
                                var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 - 1] [(signed char)14])) ? (arr_22 [i_4 - 3] [i_4] [i_4 + 1] [i_4 + 1] [(signed char)16]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) && ((!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_11))))))));
                            }
                        } 
                    } 
                    arr_24 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)105), (((/* implicit */unsigned char) (_Bool)1))))) & (((((((/* implicit */int) var_7)) - (((/* implicit */int) arr_13 [i_4])))) / (var_0)))));
                }
            } 
        } 
    } 
}
