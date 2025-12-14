/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166816
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
    var_10 = ((/* implicit */_Bool) (-(((((/* implicit */int) (!(((/* implicit */_Bool) -7440253676092042806LL))))) | (((/* implicit */int) ((_Bool) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) ((((min((((/* implicit */long long int) var_4)), (975393237550700154LL))) * (((/* implicit */long long int) arr_1 [i_0])))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned char)63))))) ? (((4383138680616558743LL) / (((/* implicit */long long int) ((/* implicit */int) (short)27166))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
        var_12 = var_5;
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (unsigned short i_4 = 4; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */unsigned long long int) ((arr_13 [i_2] [i_4 - 1] [i_2] [i_4]) / (arr_13 [i_2] [i_2] [i_3 + 1] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_3 + 1] [i_2] [i_2])) ? (27ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                        arr_15 [i_3] [i_1] [i_3 - 1] = ((((/* implicit */int) ((unsigned char) min((var_3), (((/* implicit */unsigned int) (unsigned char)63)))))) >= (((/* implicit */int) min((((/* implicit */short) var_1)), ((short)(-32767 - 1))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */long long int) max((var_14), (var_9)));
                            var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(9))))));
                            var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_1])) != (9223372036854775807LL))))) < (((var_6) ? (-6951181427296259546LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38595)))))));
                            var_17 = ((/* implicit */unsigned int) var_4);
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 3; i_6 < 19; i_6 += 2) 
                        {
                            arr_21 [i_3] [(signed char)18] [(signed char)18] [i_4 + 1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_3 + 1] [(signed char)14] [i_4 + 2])) ? (arr_19 [i_1] [i_3 + 1] [i_1] [i_4 + 2]) : (4294967278U)));
                            var_18 |= ((/* implicit */_Bool) ((var_5) ? (-6951181427296259546LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2772918129U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) (signed char)-40);
                            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) 8542626449362144452LL)))))))) ^ ((-(975393237550700133LL)))));
                            var_21 = ((/* implicit */unsigned int) var_0);
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (min((var_3), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)255)))))) : (max((((/* implicit */unsigned int) min((((/* implicit */int) arr_16 [i_1] [i_1] [i_3] [i_4] [i_7 + 3])), (919732692)))), (((((/* implicit */_Bool) -7440253676092042806LL)) ? (3122647377U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33585))) : (3599457306312507767LL))), (((arr_0 [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))), (((/* implicit */long long int) ((((/* implicit */int) min(((short)-18), (((/* implicit */short) var_6))))) > (((/* implicit */int) var_8)))))));
    }
}
