/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121362
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (var_16)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + (var_15)))) : ((-(3403096102145946101ULL)))))));
                var_21 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) var_19);
                var_22 = ((/* implicit */unsigned char) (((~(arr_1 [i_0] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (-5603350237762252725LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) > (((/* implicit */long long int) var_7))))))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_4 [i_0] [i_0] [i_1]))))) >= (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_0])) ? (var_19) : (var_13)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (arr_3 [21] [i_0] [(_Bool)1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) <= (((/* implicit */int) var_6))))) << (((((int) arr_1 [(short)4] [i_2 + 2])) - (1695004131)))));
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-5603350237762252708LL)))) ? (3403096102145946088ULL) : (((/* implicit */unsigned long long int) arr_10 [4LL] [7ULL]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_24 += ((/* implicit */unsigned long long int) arr_10 [i_3] [i_3]);
        /* LoopSeq 2 */
        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 2) 
        {
            var_25 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((var_16) < (var_13)))) + (((/* implicit */int) var_18))))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_4 - 2] [i_4 - 2])), (5603350237762252748LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_4)))))) : (((var_14) | (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (6355798507291790251LL)))) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4 - 2] [i_3]))) > (var_17)))))))));
                        var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-2048)) ? (arr_9 [(unsigned short)16]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (7009790620766306956LL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) == (arr_14 [i_5] [i_4])))))))));
                    }
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            arr_28 [i_3] [i_7] [i_7] = ((/* implicit */short) (~(((((-7009790620766306956LL) - (((/* implicit */long long int) var_14)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)28619)) ? (arr_22 [i_3] [i_3] [i_3] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21464))))))))));
            var_29 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_7)))))))));
            arr_29 [i_3] = ((/* implicit */int) arr_19 [i_3] [i_3]);
            var_30 = ((/* implicit */short) var_17);
        }
        var_31 = ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_0))) | (((/* implicit */unsigned int) ((((/* implicit */int) (short)2037)) % (var_16)))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63)) ? (15043647971563605538ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47087)))))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 2) 
        {
            arr_38 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
            var_33 = ((/* implicit */int) max((var_33), (var_16)));
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_9] [i_8] [i_8]))))) : (((((/* implicit */_Bool) var_0)) ? (arr_13 [i_8] [i_8]) : (((/* implicit */unsigned long long int) var_12))))));
            arr_39 [i_8] [i_8] = ((((/* implicit */_Bool) ((-5058788565600492135LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198)))))) ? ((-(((/* implicit */int) arr_20 [i_9])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))));
            arr_40 [i_9] [i_8] [15] = ((/* implicit */short) arr_32 [i_8] [i_9]);
        }
        for (int i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            arr_45 [i_8] [i_10] [13LL] = ((((arr_25 [i_8] [i_8] [i_10]) >> (((-602323240) + (602323267))))) >> (((((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */unsigned long long int) arr_9 [i_8])) : (arr_42 [i_8] [i_8] [(signed char)4]))) - (15338244177684186345ULL))));
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_41 [i_8] [i_10]))))) > (((long long int) -1240814262))));
        }
    }
    var_36 = ((/* implicit */signed char) ((unsigned short) var_17));
    var_37 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) (short)-31346)) ? (3403096102145946077ULL) : (((/* implicit */unsigned long long int) 992965763)))), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) var_18))))))) * (((/* implicit */unsigned long long int) (~((~(var_13))))))));
    var_38 -= ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_17)), (var_15)))))) ? (min((((var_7) / (var_13))), (((((/* implicit */int) (unsigned char)138)) & (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_5)));
}
