/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130615
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((((_Bool) 306308339)) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_0 [i_2]))))))) : (min((arr_8 [i_0] [i_1] [i_2 - 2]), (((/* implicit */unsigned int) ((_Bool) 306308361)))))));
                    var_16 = ((/* implicit */signed char) -306308339);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) (short)9093))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), (var_11)))));
                        var_18 = ((/* implicit */unsigned short) ((((unsigned int) (+(306308339)))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_1])) ? (((-2039371003) - (-306308314))) : (((((/* implicit */_Bool) -306308339)) ? (306308339) : (((/* implicit */int) (unsigned short)37409)))))))));
                        var_19 = ((/* implicit */unsigned char) (~(-306308339)));
                        var_20 -= ((/* implicit */long long int) ((((/* implicit */int) var_6)) % (306308346)));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_0))));
                        var_22 -= ((/* implicit */short) (+(((/* implicit */int) (short)8611))));
                        var_23 = ((((((/* implicit */_Bool) (unsigned short)37409)) ? (306308339) : (((/* implicit */int) arr_2 [i_1])))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [i_0] [i_0] [i_2]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_24 = ((((-306308343) / (-306308348))) / (((/* implicit */int) ((unsigned short) -1037150560))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_14) : (-1291832368)));
                        var_26 *= ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) 306308342);
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        for (short i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            {
                var_28 = ((/* implicit */unsigned int) 3237742731625120168LL);
                var_29 = ((/* implicit */short) 474754206);
                var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) arr_23 [i_7]))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_9 [i_6] [i_6] [12LL] [i_7 + 1] [i_7 - 1]))))))) ? (((unsigned int) arr_10 [i_6] [i_7 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(_Bool)1] [i_6] [i_7] [i_7]))))))));
            }
        } 
    } 
}
