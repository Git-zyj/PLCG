/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167327
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) (unsigned char)29)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)227)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_18 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((511), (arr_10 [i_0] [6] [(unsigned char)0] [i_0]))))));
                        var_19 = ((/* implicit */short) max(((!(((/* implicit */_Bool) (unsigned char)58)))), ((((-(((/* implicit */int) var_9)))) > (max((((/* implicit */int) (unsigned char)224)), (arr_10 [i_2] [i_2] [(_Bool)1] [i_2])))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (~((~(max((((/* implicit */int) (short)0)), (-527)))))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+((((-(((/* implicit */int) (unsigned char)115)))) + (((/* implicit */int) ((unsigned char) 262144))))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-11291)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (unsigned short)38969))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
    {
        var_22 = ((/* implicit */signed char) min(((+(((/* implicit */int) (short)4183)))), ((~(((/* implicit */int) max(((short)21005), ((short)32765))))))));
        var_23 = (~(((/* implicit */int) (short)16720)));
    }
    for (short i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_24 -= ((/* implicit */unsigned char) ((_Bool) 1130752134));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    arr_22 [i_5] [i_6] [i_6] [i_7] = max(((!((!(((/* implicit */_Bool) 1242620707)))))), ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_16))))))));
                    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (short)4163))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_7 [2ULL] [2ULL] [i_5 + 1] [i_5 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_26 = var_17;
                                var_27 = (!(((/* implicit */_Bool) ((arr_1 [i_9 - 2]) + (arr_1 [i_9 - 2])))));
                                var_28 = ((/* implicit */unsigned char) max((min(((~(((/* implicit */int) (unsigned char)115)))), (((/* implicit */int) arr_25 [i_7] [i_6])))), (((((/* implicit */_Bool) max((var_6), ((short)-256)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_7] [(unsigned char)5]))))) : ((-(((/* implicit */int) arr_17 [(unsigned short)10] [i_6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */short) ((min(((~(((/* implicit */int) (signed char)29)))), ((~(((/* implicit */int) var_11)))))) >= (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)39))))));
        arr_27 [i_5] [i_5 - 1] = max(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)0)));
    }
    var_30 = var_3;
}
