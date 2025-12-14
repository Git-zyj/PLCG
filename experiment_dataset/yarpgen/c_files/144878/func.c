/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144878
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
    var_12 = ((/* implicit */_Bool) (~(447836555U)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    arr_8 [i_2 + 1] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((1665854017) == (((/* implicit */int) (signed char)-123))))), (((4370332549494705960ULL) / (((/* implicit */unsigned long long int) arr_0 [i_1])))))), (((/* implicit */unsigned long long int) var_2))));
                    var_13 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */unsigned long long int) 1023LL)) : (14076411524214845643ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_2] [i_0]))) : (arr_2 [i_0])))))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9)))))) + (((((/* implicit */_Bool) arr_0 [7U])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))))))));
                    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) 246617982U))));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (((986830267U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))))), (var_5)));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                var_16 &= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) ((arr_10 [(unsigned char)0]) || (var_0)))) + (((((/* implicit */int) arr_10 [i_3])) * (((/* implicit */int) var_0)))))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 14076411524214845654ULL)) ? (((/* implicit */int) (unsigned char)91)) : (-2023567897))) == ((~(((/* implicit */int) min((arr_14 [i_3]), (((/* implicit */unsigned char) var_11)))))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_12 [i_4] [i_4]))));
                }
                var_19 += ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)164))))))));
            }
        } 
    } 
    var_20 += ((/* implicit */signed char) ((unsigned short) -297024364));
}
