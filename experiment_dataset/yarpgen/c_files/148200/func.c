/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148200
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_11))))) * (min((2428826561559542722LL), (((/* implicit */long long int) (_Bool)1))))))), ((~(5136346810845101724ULL)))));
    var_13 = ((/* implicit */short) ((unsigned char) (+(((long long int) (unsigned char)207)))));
    var_14 = ((unsigned short) max((((/* implicit */long long int) (short)12571)), (((809103317492148501LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (min((((/* implicit */long long int) var_2)), (-2428826561559542734LL)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_4 [11U] [i_1] [i_2]))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), ((!(((-2428826561559542722LL) < (((/* implicit */long long int) ((/* implicit */int) ((10189366837479480425ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))))))))))));
                        var_18 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1037)) ? (-7925853295819605463LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12571)))))), (min((13310397262864449892ULL), (((/* implicit */unsigned long long int) (unsigned char)11)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1066958656U))))));
                        arr_8 [i_2] [i_1] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 771619458)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42608))) : (559484131U)))))) ? ((-(min((arr_1 [(unsigned short)10]), (arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) (+(min((-484038239), (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (int i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)11))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [12ULL] [i_1] [i_1])) ? (max((((/* implicit */int) (_Bool)0)), (arr_2 [i_1] [9]))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [(_Bool)1] [i_4 + 1] [i_2] [i_2] [(_Bool)1] [i_0])) != (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2428826561559542705LL)) ? (-2428826561559542738LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((~(2428826561559542738LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_3 [i_1] [i_2])) + (42098104U))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-2428826561559542722LL)))) ? (((/* implicit */int) ((_Bool) 2428826561559542751LL))) : (((/* implicit */int) (!((_Bool)1)))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 3; i_6 < 14; i_6 += 1) 
                        {
                            var_22 = arr_3 [i_2] [i_1];
                            arr_17 [(unsigned char)9] [i_5] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (short)-14821)) < (-1276049885))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_11 [i_1] [i_2 + 1]))));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]);
                            var_25 = ((/* implicit */unsigned short) arr_5 [i_5] [i_2]);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_4 [i_0 + 4] [i_1] [i_2]))))) + ((~(((/* implicit */int) (_Bool)0))))));
                            var_27 |= ((/* implicit */unsigned char) ((_Bool) ((unsigned int) (short)23333)));
                            arr_25 [i_0 + 4] [i_2] [i_2] = ((/* implicit */unsigned char) (((~(arr_3 [i_0] [i_0]))) != (((((/* implicit */_Bool) arr_9 [i_5] [0LL] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_5 [i_1] [(_Bool)1])) : (((/* implicit */int) (short)-23334))))));
                            var_28 *= ((/* implicit */unsigned short) arr_3 [i_8] [i_1]);
                            arr_26 [i_0] [i_2] [i_2] [i_5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4252869192U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-23349)))))) ? (((/* implicit */long long int) ((-691119665) ^ (((/* implicit */int) (short)-23349))))) : ((~(2428826561559542722LL)))));
                        }
                    }
                }
            } 
        } 
    } 
}
