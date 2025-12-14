/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157834
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
    var_14 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((((!(var_12))) ? (((/* implicit */int) ((unsigned char) 2619900707U))) : (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((var_6) ? (arr_0 [i_0]) : (1675066571U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) arr_0 [i_0])) : (7135059417668974609LL))))))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            arr_5 [(_Bool)1] [(short)1] [i_1 + 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_2 [i_1 - 2] [i_1 + 3])) : (5468613222063188071LL))) <= (((long long int) arr_0 [i_0]))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((short) var_9));
                var_16 += ((/* implicit */short) var_9);
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1] [i_2] [i_1 - 2])))))) + (((min((((/* implicit */unsigned int) arr_1 [i_0])), (var_4))) * (((unsigned int) var_8))))));
                arr_9 [i_2] = ((((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18326))) : (5438085959609188792LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))));
                var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-3712222086517596046LL))) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_1 [i_1 + 3]))))));
            }
            for (int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_19 = ((((((/* implicit */int) ((_Bool) 296700201))) * (((/* implicit */int) (!((_Bool)1)))))) <= (((/* implicit */int) ((unsigned char) (!(arr_4 [i_0] [6U] [i_3]))))));
                var_20 += ((/* implicit */_Bool) min((((((/* implicit */int) min((var_12), ((_Bool)1)))) | (((/* implicit */int) (unsigned char)159)))), (((/* implicit */int) (!(var_5))))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((var_12) ? (7135059417668974584LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)31))))) : (1233518938680116384LL))))))));
                    arr_14 [1] [i_4] = (unsigned char)1;
                }
                var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */int) (unsigned char)176)) <= (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)10))))))));
                var_23 = ((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_0))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((long long int) ((_Bool) -3712222086517596049LL))))));
                arr_18 [6LL] [i_5] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_5 - 1])) ^ (((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_5 - 1])))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) ((short) var_12))) - (((/* implicit */int) var_1))))))));
            }
            arr_19 [0U] [i_1] = ((/* implicit */_Bool) ((max(((_Bool)0), (var_2))) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)0))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                for (unsigned char i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    {
                        arr_25 [i_0] [i_1 - 1] [(_Bool)1] [(short)2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_6] [i_7]))));
                        var_26 = ((/* implicit */int) (!(((((/* implicit */_Bool) ((unsigned char) (unsigned char)224))) && (((_Bool) var_3))))));
                        var_27 = (-(max((((unsigned int) (unsigned char)115)), (((/* implicit */unsigned int) ((short) (_Bool)1))))));
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)105)) & (((/* implicit */int) (_Bool)1)))) << (((arr_17 [i_0] [(unsigned char)10] [i_8] [i_0]) - (1408600363U)))))) ? (max((var_11), (((/* implicit */unsigned int) ((_Bool) 7135059417668974609LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0])))));
            var_29 = ((/* implicit */int) ((((arr_2 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_8] [(_Bool)1])))))));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1176459470U)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-28779)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)107)))))) : ((-(((/* implicit */int) arr_10 [i_0] [i_8] [i_8] [i_0]))))));
        }
    }
}
