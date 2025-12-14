/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144699
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((var_9) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2))));
        arr_6 [i_1] = ((/* implicit */int) min((5835942455258021916LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 6529656993973128469ULL)) ? (-477737192) : (arr_4 [i_1]))))));
        var_11 *= ((/* implicit */long long int) min((6529656993973128469ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_12 = ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (var_7) : (((/* implicit */int) (_Bool)1))))) : (var_8));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 8; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) ((_Bool) var_2)));
                            var_13 |= (!(((/* implicit */_Bool) (signed char)43)));
                            arr_19 [i_5] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (+(-3858475678212246144LL)));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */unsigned int) arr_1 [i_1]);
            var_15 *= ((/* implicit */unsigned int) (signed char)-38);
            arr_20 [i_2] [i_2] [i_1] = ((((((/* implicit */long long int) 120)) / (-6437265952717163951LL))) * (((/* implicit */long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))))))));
        }
        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            arr_23 [i_6] [i_6] [i_6] = ((/* implicit */long long int) (((((~(((/* implicit */int) arr_21 [i_1] [i_6] [i_6])))) ^ (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_6]))))))));
            var_16 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (9223372036854775804LL)))) ? (max((var_8), (((/* implicit */long long int) var_7)))) : (((3594483875734733734LL) << (((3858475678212246159LL) - (3858475678212246158LL))))))) ^ (var_0)));
        }
    }
    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)60)), (263067340287805479LL)));
        arr_26 [i_7] [i_7] = ((/* implicit */int) max((((/* implicit */long long int) ((arr_24 [i_7]) ? (((/* implicit */int) arr_24 [i_7])) : (((/* implicit */int) arr_24 [i_7]))))), (var_0)));
    }
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned long long int) 9183060409341963038LL)), (1138234185805882426ULL))) : (min((var_6), (((/* implicit */unsigned long long int) -4901205407206546435LL))))))));
    var_19 = var_5;
}
