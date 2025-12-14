/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115163
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) == (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (arr_7 [i_0] [16U] [i_1] [i_0]))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) (unsigned short)25498)), (2277130461252858710LL))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19052)))))) % (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_8 [i_0])))));
                        var_16 &= (-((~(2117230543))));
                        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)25498))));
                    }
                    for (long long int i_4 = 1; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_14 [i_0] [i_1] [i_2] [i_0] [i_0])))) ? (max((((((/* implicit */_Bool) (unsigned short)40061)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_13 [i_4 - 1] [i_2] [i_0] [i_1] [i_0])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)40044)) & (((/* implicit */int) (unsigned short)25498)))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_4 + 1] [7U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2105057138)) ? (16927184599496776629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25465)))));
                    }
                    for (long long int i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */int) arr_0 [(unsigned short)10]);
                            arr_20 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((arr_11 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [11U] [i_5 + 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(arr_17 [(unsigned short)0] [(unsigned short)0] [i_2] [i_2] [i_2])))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 17813007027700436062ULL);
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_7] [i_7] = ((/* implicit */_Bool) (-(arr_9 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                            arr_25 [i_7] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_5 + 1])) % (((/* implicit */int) arr_10 [i_5] [i_1] [i_1]))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_5 - 1])) | (((/* implicit */int) arr_2 [i_5 - 1]))));
                        }
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
                        var_22 = ((/* implicit */unsigned short) (+(762213372)));
                    }
                    for (long long int i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 633737046009115550ULL)) ? (arr_27 [i_0] [i_8 - 1] [7LL] [i_8 + 1] [i_8 + 1] [i_8]) : (arr_7 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1])))) || ((!((!(((/* implicit */_Bool) (unsigned short)30208))))))));
                        var_24 = ((/* implicit */unsigned short) (-(max((max((arr_17 [i_1] [i_2] [i_1] [i_1] [i_0]), (633737046009115555ULL))), (((/* implicit */unsigned long long int) (-(arr_7 [(unsigned short)16] [i_1] [i_2] [(unsigned short)16]))))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((7105127177330496238LL) / (4294966784LL))) * (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0)));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            var_26 = ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (arr_0 [i_0]));
                            var_27 = ((((/* implicit */_Bool) 4294966789LL)) ? (16927184599496776629ULL) : (((/* implicit */unsigned long long int) 133693440U)));
                            arr_43 [i_0] [i_9] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) (-((+((+(-8918720120934687329LL)))))));
                        }
                        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != ((-(((((/* implicit */_Bool) -6978890680830952707LL)) ? (((/* implicit */unsigned long long int) 271139269U)) : (136902082560ULL)))))));
                        var_29 = ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
        } 
    }
    for (int i_13 = 0; i_13 < 23; i_13 += 3) 
    {
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)13195), (((/* implicit */unsigned short) var_11)))))) : (((arr_44 [i_13]) | (arr_44 [i_13])))));
        var_31 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) arr_44 [i_13])) - (((unsigned long long int) -1854866745161635422LL))))));
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) 2147483647))), (((var_11) ? (((/* implicit */int) arr_45 [i_13])) : (((/* implicit */int) var_1))))))) ? (min((6418231593535449900LL), (((/* implicit */long long int) arr_45 [i_13])))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    }
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_12))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
    var_34 = ((/* implicit */long long int) (-(var_8)));
}
