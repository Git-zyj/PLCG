/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145898
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_4 [i_0] [i_0])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))));
            var_12 = ((/* implicit */short) ((unsigned char) arr_4 [i_0] [i_0]));
        }
        var_13 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))) : (arr_10 [i_0] [i_2])));
            arr_12 [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_7 [i_0] [i_2]))))) : (min((-8251982508275174055LL), (((/* implicit */long long int) (short)30516))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : ((+(8251982508275174054LL)))));
        }
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)9412))))) - (((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) min((min((var_4), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3])))), (((/* implicit */unsigned long long int) var_0))));
        arr_17 [i_3] [i_3] = ((/* implicit */signed char) arr_2 [i_3]);
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((signed char) ((unsigned int) var_9))))));
        var_17 |= ((/* implicit */long long int) ((short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(signed char)10])) || (((/* implicit */_Bool) var_8))))) % (((/* implicit */int) ((unsigned short) var_10))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (signed char)0)))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (((((~(14020360326206032007ULL))) | ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6705))))))) >> (((/* implicit */int) (((((_Bool)1) && ((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) arr_7 [i_5] [i_6])) : (((/* implicit */int) (signed char)0)))))))))))));
                        arr_28 [i_4] [i_4] [i_4] [i_6] [i_6] [i_7] = ((short) ((((/* implicit */_Bool) 8251982508275174054LL)) ? (3ULL) : (12887157129660954535ULL)));
                        arr_29 [i_5] = ((/* implicit */unsigned char) arr_10 [i_4] [i_4]);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 403349846602947628ULL)) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) var_1))))) || ((!(((/* implicit */_Bool) var_6))))));
        arr_30 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 663177707U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8251982508275174055LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218)))));
        arr_31 [i_4] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(signed char)10])) && (((/* implicit */_Bool) arr_16 [i_4] [i_4])))))) <= (min((((/* implicit */long long int) (_Bool)1)), (8251982508275174055LL))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) 8325898197381310081LL);
        var_22 = ((/* implicit */_Bool) arr_4 [i_8] [i_8]);
        var_23 = (((+(arr_22 [i_8] [i_8] [i_8]))) > (min((((unsigned int) var_2)), (((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    }
    var_24 = ((/* implicit */unsigned char) 18147625901129021466ULL);
}
