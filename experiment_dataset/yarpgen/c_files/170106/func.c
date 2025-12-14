/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170106
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */int) (signed char)106)) << (((/* implicit */int) arr_8 [18LL] [i_1] [i_2])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32750))) != (-6323601257825839910LL)))))));
                    var_14 = var_3;
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_15 = (_Bool)1;
                        arr_16 [i_3] [i_3] [i_3] [i_3] [i_0] [i_0] &= ((/* implicit */int) ((_Bool) ((((_Bool) arr_12 [i_3] [i_2] [i_1])) ? (1932430321) : (1616375955))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((~(arr_3 [i_0]))) < ((+(((/* implicit */int) ((_Bool) arr_11 [i_4] [i_4] [i_4]))))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) max((arr_14 [i_0] [i_1] [i_2] [i_4] [i_5]), (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) var_12))))));
                            var_18 -= ((/* implicit */int) (short)-32746);
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1168069850)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_7 [i_0] [i_1])))) ? (var_2) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_6])))) - (((/* implicit */int) (signed char)-61))));
                            var_20 |= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -3271291884744334718LL)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) (short)-32741))))))) ? (((int) (!(((/* implicit */_Bool) var_2))))) : (var_3));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((arr_12 [i_0] [i_1] [i_2]) / (arr_12 [i_0] [i_0] [i_2])));
                            arr_28 [i_0] [i_2] [i_2] [i_4] [i_4] [i_7] [i_2] = ((/* implicit */int) ((_Bool) arr_9 [i_7]));
                            arr_29 [i_7] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) (signed char)-23);
                            arr_32 [8ULL] [i_1] [i_2] [i_2] [i_8] = ((/* implicit */long long int) arr_18 [i_0] [i_0] [1LL] [i_0]);
                            arr_33 [11] [i_1] [i_2] [i_2] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) (short)32765))));
                            arr_34 [(_Bool)1] [(_Bool)1] &= ((/* implicit */short) max((((long long int) (signed char)80)), (((/* implicit */long long int) ((int) (signed char)10)))));
                        }
                        var_22 = ((/* implicit */long long int) 1932430315);
                        var_23 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    }
                    arr_35 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(var_0)));
                }
            } 
        } 
    } 
    var_24 = ((_Bool) var_8);
}
