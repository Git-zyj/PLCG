/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185451
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) var_4))))) ? (var_11) : (((((/* implicit */_Bool) var_10)) ? (445020411) : (var_0)))))) ? (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */long long int) -1913925444)) : (68719476720LL))) : (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_12))) ^ (((/* implicit */int) (signed char)0))))))))));
    var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0))))) / (((((/* implicit */int) (signed char)0)) + (var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (68719476720LL) : (1029715699947039887LL)))) ? (((68719476720LL) | (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32184)) / (var_11)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_4))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) * (((((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (unsigned short)33351)) : (((/* implicit */int) (_Bool)0)))) << (((((long long int) (unsigned short)33351)) - (33349LL)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_4 [i_1 - 1] [i_1 + 2]))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned short)33351)) : (((/* implicit */int) ((unsigned short) var_11)))))));
                var_15 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) - (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)99)))))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) var_8)))), ((((-2147483647 - 1)) | (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) : (664067790U))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65535)))) - (35941)))))) - ((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)36261)) ? (13703767311374523075ULL) : (((/* implicit */unsigned long long int) 3630899506U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
}
