/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118310
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
    var_13 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned char)143)) == (((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)133)) - (120)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)160), (((/* implicit */unsigned char) var_7)))))) : (min((((/* implicit */long long int) (unsigned char)151)), (var_6))))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-15)) != (((/* implicit */int) (unsigned char)112)))) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) min(((unsigned char)164), ((unsigned char)94)))))))));
    var_14 = ((/* implicit */short) var_1);
    var_15 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4132421070U)) != (var_10))))) == (((8731877480323182106ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 15731680579092146692ULL))))) | (min((((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (short)-14358)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7057))))))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2241843619U)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) arr_5 [i_0]))))) ? (min((arr_1 [(_Bool)1]), (((/* implicit */unsigned long long int) arr_2 [(signed char)9] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3468121951949720398ULL)) ? (6509364728918388931LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32842))))))))))))));
                arr_6 [(short)3] = ((/* implicit */_Bool) min((arr_5 [i_1]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0])) != (((/* implicit */int) arr_5 [(unsigned short)3])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)11055)) ? (((/* implicit */unsigned long long int) var_12)) : (var_11))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)1832))))))) ? (((/* implicit */int) max(((signed char)-5), (((/* implicit */signed char) (_Bool)0))))) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (unsigned char)21)), (var_10)))))));
}
