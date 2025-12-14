/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119167
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (-(((arr_5 [12U]) | (((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_4 [i_0]))) + (((/* implicit */int) ((signed char) 0U)))))) : (max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1624007391877526286LL)) || (((/* implicit */_Bool) var_7))))))))))));
                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((16133358262402466386ULL), (((/* implicit */unsigned long long int) var_6)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_12 [i_2] [(unsigned char)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)0)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31))))))));
                            var_17 ^= ((/* implicit */unsigned short) 3706658968U);
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] = min((((/* implicit */unsigned int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) -1624007391877526286LL)) || ((_Bool)0))))))), ((~(min((var_10), (((/* implicit */unsigned int) (signed char)127)))))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (arr_5 [i_3 - 2]) : (arr_5 [i_3 - 3])))) != (var_11)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) (-2147483647 - 1));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [(_Bool)1] [i_4] [5U] [i_0] = max((((unsigned int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)16))) : (1624007391877526286LL)))), (((/* implicit */unsigned int) (-(((2046847277) % (((/* implicit */int) (signed char)-127))))))));
                                var_19 = ((/* implicit */unsigned short) var_14);
                                var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) (~(((((/* implicit */int) arr_2 [i_1] [(_Bool)1])) ^ (((/* implicit */int) (_Bool)1))))))) ? ((+(((/* implicit */int) arr_21 [i_0])))) : (((((/* implicit */int) ((short) var_12))) ^ (((arr_19 [i_6] [i_6]) ^ (arr_5 [14LL])))))))));
                                var_21 ^= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_6] [4LL] [i_6]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (short i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            {
                arr_30 [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-107)))) ? (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [i_7] [i_8] [i_8 + 2]))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7] [i_8] [(signed char)0]))))));
                arr_31 [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)));
                arr_32 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3080387014U)))) ? (((/* implicit */int) ((signed char) (signed char)-50))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)16))) == (arr_8 [i_7] [i_7] [i_7] [i_8]))))));
            }
        } 
    } 
}
