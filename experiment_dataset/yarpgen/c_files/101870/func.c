/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101870
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)19169), (((/* implicit */unsigned short) (signed char)31))))) ? (((/* implicit */int) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_10))))) >= (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-37)), ((unsigned short)46385))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8561220040762443454LL)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (signed char)-32))))) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (max((894955753), (((/* implicit */int) var_10)))))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_13 ^= ((/* implicit */signed char) (unsigned short)46367);
                                arr_11 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_9 [i_4]) / (((/* implicit */int) var_8)))) + (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0] [6] [i_0])), ((short)5748))))))) || (((/* implicit */_Bool) max((((-22) / (574395452))), (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) -43623407);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) -574395465)))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) / (-894955753)))))) != (((var_6) >> ((((+(var_6))) - (6191186991713273713LL)))))));
}
