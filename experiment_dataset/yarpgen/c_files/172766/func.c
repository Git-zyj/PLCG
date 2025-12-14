/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172766
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) (short)21459)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21459))) : (14668205416237952680ULL)))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_6))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_0)))))) ? ((~(var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_3 [i_0] [i_1])) / (((/* implicit */int) var_6))))));
                var_16 = (~(min((arr_0 [i_0]), (arr_0 [i_0]))));
            }
        } 
    } 
    var_17 = var_12;
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_4])) * (((/* implicit */int) arr_8 [i_2] [i_3]))))) ? (((((/* implicit */int) arr_8 [(unsigned char)10] [i_3])) - (((/* implicit */int) arr_8 [i_2] [(_Bool)1])))) : ((+(((/* implicit */int) arr_8 [i_4] [i_3]))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_11 [i_3] [i_2] [i_3] [i_2])))) ? ((-(arr_11 [i_4] [i_3] [i_4] [i_3]))) : (arr_11 [i_4] [i_4] [i_3] [i_2]))))));
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_7 [9U]), (((/* implicit */signed char) arr_8 [i_2] [i_4])))))));
                }
            } 
        } 
        arr_14 [i_2] [i_2] = arr_8 [i_2] [i_2];
        /* LoopSeq 1 */
        for (long long int i_5 = 2; i_5 < 12; i_5 += 4) 
        {
            var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)60))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (+(((((/* implicit */_Bool) 10657249587792890282ULL)) ? (max((7208093877269399934LL), (arr_6 [i_5] [i_5]))) : ((~(9223372036854775807LL))))))))));
            arr_17 [i_5] [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)13103))) != (6517907914040636019LL)));
            arr_18 [i_2] [i_2] [i_5] = ((/* implicit */short) max(((((!(((/* implicit */_Bool) 3778538657471598944ULL)))) || ((!(((/* implicit */_Bool) 363449880U)))))), ((!(((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 + 1]))))));
            var_22 = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) arr_8 [i_2] [i_5 + 1])) * (arr_11 [i_2] [i_2] [i_5 - 2] [i_5])))))));
        }
        arr_19 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)16)) || (((/* implicit */_Bool) (signed char)-66))));
    }
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        arr_22 [i_6] &= ((/* implicit */short) ((((/* implicit */int) (signed char)109)) / (1218579296)));
        arr_23 [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_6]))));
        var_23 = ((/* implicit */int) arr_21 [i_6]);
    }
}
