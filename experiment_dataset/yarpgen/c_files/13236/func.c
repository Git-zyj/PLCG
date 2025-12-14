/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13236
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_3))))) : (var_13))) >> (((5440970039267536946LL) - (5440970039267536936LL))))))));
        var_18 = ((/* implicit */long long int) (_Bool)1);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_19 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_11) : (((/* implicit */int) (unsigned short)11028)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) 7127929069828211928LL))));
                    var_21 = ((/* implicit */int) (unsigned char)1);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_9))));
    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
    var_24 = ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (_Bool)1))), ((-(((/* implicit */int) (unsigned short)52923))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (var_16)))), (var_13)))) : (min(((+(2242770743745108072LL))), (((/* implicit */long long int) max((((/* implicit */signed char) var_12)), (var_5)))))));
    var_25 = ((((var_13) <= (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)42))))))) ? (((/* implicit */unsigned long long int) var_13)) : (min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54495)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_1)))))));
}
