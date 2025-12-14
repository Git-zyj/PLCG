/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159941
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6829858466846879045LL)) ? (((/* implicit */int) (signed char)127)) : (816556554)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : ((-(arr_4 [i_1])))))) ? (var_4) : ((+(arr_0 [i_0 - 2] [i_0 - 2])))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) max((var_12), (min((((/* implicit */unsigned int) (-(arr_2 [i_0 + 3])))), (arr_11 [i_4 + 1] [i_3] [i_3] [i_2] [i_1] [i_0 + 2] [i_0 + 2])))));
                                var_13 = ((/* implicit */signed char) ((-6829858466846879045LL) < (((/* implicit */long long int) -816556555))));
                                arr_14 [i_4] [i_1] &= ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)124)), (723669327634913929LL)));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)118)) - (((/* implicit */int) ((signed char) -816556555)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) (signed char)73)) : (((((/* implicit */_Bool) (+(741587403)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_1)) >= (arr_12 [i_0] [i_0 + 3] [i_0 + 3] [i_1 - 1] [i_1] [i_5] [(_Bool)0])))) : (((var_6) + (var_9)))))));
                    var_16 += ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) arr_6 [(signed char)21] [i_0 - 2] [i_0 - 2])) ? (501227249) : (-816556546))), (((/* implicit */int) ((signed char) 223655946U)))))));
                }
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7] [i_7] [i_7]))) + (var_4))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)1))))))) <= ((+((+(arr_11 [i_8] [i_8] [i_7] [i_6] [i_1] [i_1 - 2] [i_0])))))));
                                arr_25 [i_0 - 1] [i_6] [i_7] = ((/* implicit */signed char) (+(arr_24 [i_8] [i_7] [i_6] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_5))))), (((-1LL) % (-8255057792448907262LL))))), (((/* implicit */long long int) ((816556555) <= (1361386238))))));
    var_19 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_4)))) : (((/* implicit */int) ((var_1) > (-1361386238))))));
}
