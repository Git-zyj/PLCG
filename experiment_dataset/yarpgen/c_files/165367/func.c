/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165367
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
    var_17 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_5)))) << (((/* implicit */int) (_Bool)0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_18 = var_13;
                                arr_10 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_1] [i_4])) : (((/* implicit */int) (signed char)73))))))) ? (-8068504648007666539LL) : (((/* implicit */long long int) min((((/* implicit */int) max(((short)14841), (((/* implicit */short) arr_9 [i_0] [i_1] [i_0] [i_3] [i_4]))))), (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_1] [i_0] [i_3] [i_4]) : (((/* implicit */int) (unsigned char)63)))))))));
                            }
                        } 
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */short) max((max((((-448243119988214519LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46993))))), (((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1]))))))), (((/* implicit */long long int) ((unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                var_19 -= ((/* implicit */unsigned char) var_0);
                var_20 ^= ((/* implicit */_Bool) min((arr_0 [(unsigned short)0]), (((/* implicit */long long int) ((signed char) min((arr_9 [i_0] [i_0] [(unsigned char)2] [i_0] [i_1]), (var_15)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)50)))), (max((((/* implicit */unsigned int) var_3)), (var_13))))));
    var_22 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_7)))) | (((/* implicit */int) var_8)))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) min((var_14), (var_6))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) var_11)) ? (11674490149833338089ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) var_14)))))))))));
}
