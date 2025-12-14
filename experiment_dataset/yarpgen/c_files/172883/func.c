/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172883
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
    var_10 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41306)) >> (((((/* implicit */int) (unsigned short)37353)) - (37335)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)58419))))) : ((-(4136274152203921753LL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) -4136274152203921758LL)) || ((_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) / (-4136274152203921758LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_3)), ((short)-13214))))) : (((((/* implicit */_Bool) var_2)) ? (-4136274152203921766LL) : (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_6)) < (((/* implicit */int) var_1)))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (_Bool)1)) : (-2002525714))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) -188836718)) ? (((/* implicit */long long int) 4107437715U)) : (-4136274152203921752LL))) < (-4136274152203921752LL))))));
                                var_13 = ((/* implicit */short) min(((~(arr_9 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) & (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3] [9ULL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-79)))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) (unsigned short)12744));
                arr_15 [i_0] [i_0] [(_Bool)1] = (-(((/* implicit */int) var_6)));
                arr_16 [(signed char)7] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((((/* implicit */int) var_6)), (((((/* implicit */int) var_3)) | (((/* implicit */int) var_7))))));
}
