/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101439
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) min(((-(((/* implicit */int) ((var_1) != (((/* implicit */int) var_2))))))), (((int) (~(((/* implicit */int) (short)10014)))))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                var_14 *= ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
                var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)10014))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                        arr_17 [i_0] [i_0 + 1] [i_0 + 1] [5] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) (+(268435455)));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) * (17349498015425565449ULL))) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1]))));
                    }
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) max((5255928760683843405ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (var_3))))))))))));
                    arr_18 [i_1] = ((/* implicit */_Bool) var_1);
                    arr_19 [i_0] [i_0 + 1] [0] [i_0] |= ((/* implicit */_Bool) (short)31142);
                    arr_20 [i_1] [8] [i_1] |= ((/* implicit */unsigned int) (unsigned char)89);
                }
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(var_1))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_6 [i_2])), ((~(((((/* implicit */_Bool) -649879121)) ? (arr_14 [i_0 + 1] [i_1] [8ULL] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))))))))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((-439547988), (((/* implicit */int) arr_1 [i_0 + 1])))))));
                var_21 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-28087)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (_Bool)1))))));
            }
            var_22 = ((/* implicit */short) (+(((/* implicit */int) max((arr_15 [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_15 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
        }
        arr_25 [i_0] |= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) (unsigned char)52))))), (((unsigned long long int) var_3))))));
        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_8) ? (arr_21 [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */int) var_0))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [(_Bool)1]))) * (max((((/* implicit */unsigned long long int) (unsigned char)116)), (5255928760683843405ULL)))))));
        arr_26 [i_0] [i_0] = (-((-((+(-2079108135))))));
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        arr_29 [i_6] = (+(((/* implicit */int) (unsigned short)127)));
        arr_30 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) arr_27 [(_Bool)1] [i_6]))))))) * (((/* implicit */int) min((arr_27 [i_6] [i_6]), (((/* implicit */unsigned short) min(((unsigned char)103), (((/* implicit */unsigned char) var_10))))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        arr_33 [i_7] [i_7] = ((/* implicit */unsigned char) var_8);
        var_24 = ((/* implicit */unsigned short) ((arr_31 [i_7] [i_7]) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) var_0))));
    }
    var_25 = ((/* implicit */int) (_Bool)1);
    var_26 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (+(var_1))))))));
}
