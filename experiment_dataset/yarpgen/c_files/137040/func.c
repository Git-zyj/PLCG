/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137040
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
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_4), (var_4)))), (min((((/* implicit */int) var_10)), (var_1)))))) ? ((+((+(1164211480667114692LL))))) : (min(((+(1164211480667114693LL))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_10)))))))));
                            arr_13 [i_3] [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */int) var_8)) % (((/* implicit */int) var_10)))), ((+(((/* implicit */int) (short)0))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551598ULL)) || (((/* implicit */_Bool) (short)-16381))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [17] [i_2 + 1] [17]))))));
                            arr_14 [i_0 - 3] [i_0] [i_0] [i_3] [i_0 - 3] = ((/* implicit */_Bool) max(((~(max((-1164211480667114693LL), (((/* implicit */long long int) arr_6 [i_0])))))), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2] [i_2 - 2] [i_2 + 1] [i_2 - 1])) + (((/* implicit */int) ((1164211480667114673LL) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
                            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((-7155169107014991114LL), (9223372036854775807LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) arr_5 [i_0])))))) : (((((/* implicit */_Bool) min((arr_9 [i_0 - 3] [i_3] [(unsigned short)21] [i_0 - 3]), (((/* implicit */long long int) var_5))))) ? (((((/* implicit */_Bool) 681825037414470530LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) min((((/* implicit */short) var_0)), (var_12))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)0)) ? (8744674880516999370LL) : (8744674880516999389LL))), (min((((/* implicit */long long int) (_Bool)0)), (var_14)))))), (((unsigned long long int) -2717732555535538704LL))));
                arr_15 [i_0] [(_Bool)1] = ((/* implicit */int) min((2717732555535538696LL), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) < (((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_3);
    var_20 -= max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), ((+(((/* implicit */int) var_4))))))), ((~(var_9))));
}
