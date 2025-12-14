/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130970
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
    var_20 = ((((/* implicit */int) (((-2147483647 - 1)) == (((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))) >= (((((var_18) != (((/* implicit */long long int) ((/* implicit */int) var_14))))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned short)55021)))));
    var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) max((var_19), ((unsigned short)512)))) : (max((var_13), (((/* implicit */int) (unsigned short)10)))))), (((/* implicit */int) (unsigned short)490))));
    var_22 = ((/* implicit */int) (unsigned short)64997);
    var_23 += ((/* implicit */int) ((signed char) var_19));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_24 &= ((((((/* implicit */_Bool) var_12)) && (var_15))) && (((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) (unsigned short)55021)) : (((/* implicit */int) arr_2 [i_0]))))));
        var_25 &= ((/* implicit */int) var_6);
    }
    for (unsigned int i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-8)), ((+(((/* implicit */int) var_1))))))) ? (max((((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65526))))), (var_16))) : (((/* implicit */unsigned int) arr_1 [i_1 - 1]))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            for (unsigned int i_3 = 4; i_3 < 18; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_27 -= ((/* implicit */signed char) ((long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)55011))))), (arr_3 [10]))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_1 + 3]))))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (!(((_Bool) 16711680U)))))));
                            var_30 ^= (-(((/* implicit */int) ((((_Bool) (signed char)-9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))))))));
                        }
                        for (int i_6 = 3; i_6 < 16; i_6 += 2) 
                        {
                            var_31 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_15)), (min((((4278255606U) << (((/* implicit */int) var_15)))), (((/* implicit */unsigned int) var_12))))));
                            var_32 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_3])) || (((/* implicit */_Bool) var_6)))))))) ? (max((((((/* implicit */int) (signed char)8)) ^ (var_13))), (((/* implicit */int) (unsigned char)79)))) : ((~(((((/* implicit */int) arr_4 [i_3])) - (((/* implicit */int) arr_18 [i_3 - 3] [i_1])))))));
                            var_33 = ((/* implicit */unsigned char) max((((/* implicit */signed char) var_9)), (var_10)));
                            var_34 -= ((/* implicit */short) arr_7 [(unsigned char)14] [i_1]);
                        }
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */unsigned int) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-8))))), (arr_17 [i_1] [i_1] [i_1 + 3] [i_1]))))) : (((var_5) ? (arr_8 [(unsigned short)10] [(unsigned short)10] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_1] [i_1]))))))));
    }
}
