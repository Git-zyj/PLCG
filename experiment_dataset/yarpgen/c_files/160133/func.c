/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160133
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)44869), (((/* implicit */unsigned short) (short)22380))))) > (((/* implicit */int) ((((-468070683294024521LL) - (((/* implicit */long long int) ((/* implicit */int) var_10))))) > (((((/* implicit */_Bool) 139611588448485376ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (arr_3 [i_1] [12ULL]))))))));
                    var_14 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_1]))));
                    var_15 &= ((/* implicit */unsigned short) ((((max((1990365758U), (((/* implicit */unsigned int) arr_6 [(unsigned short)3] [(unsigned short)3])))) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29448))) & (1108307720798208ULL))) : (((/* implicit */unsigned long long int) (-(1073741823U))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_9 [0ULL] [i_2] [i_2] [i_3]), (((/* implicit */unsigned int) var_0))))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned short)36087)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned short)14336))))))) | (((/* implicit */int) ((short) ((595968243) | (((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [11ULL] [i_0]))))))));
                                var_17 = ((/* implicit */signed char) ((((arr_8 [i_0] [i_0] [i_4 + 1] [i_2]) ^ (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)176))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_0] [i_0]), (((/* implicit */short) arr_11 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 - 1]))))))));
                                var_18 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) ((unsigned char) arr_10 [i_0] [6] [i_2] [8LL])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [(short)14] [(short)14] [(signed char)9] [(signed char)9]))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)29448)) != (((/* implicit */int) var_7)))), (((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) > ((+(var_1)))))));
    /* LoopSeq 2 */
    for (signed char i_5 = 1; i_5 < 23; i_5 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36087)) ? (3221225473U) : (((/* implicit */unsigned int) arr_14 [i_5 + 1] [9U]))))) ? (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (var_2))) : (((/* implicit */unsigned long long int) (+(arr_14 [i_5 - 1] [i_5])))))))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_13 [(_Bool)1] [(_Bool)1]))) != (((arr_13 [i_5] [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40065))))))))) > (max((((/* implicit */unsigned long long int) min((var_8), (arr_14 [i_5] [i_5])))), (max((((/* implicit */unsigned long long int) arr_13 [i_5] [i_5 + 1])), (18445635765988753407ULL)))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_0)), (var_2))) << (((((arr_14 [(short)17] [i_5]) & (arr_14 [i_5] [i_5]))) + (1540214821)))))) ? (((((arr_13 [8ULL] [i_5]) << (((((/* implicit */int) var_3)) - (47525))))) << (((((8589934591LL) - (((/* implicit */long long int) ((/* implicit */int) var_5))))) - (8589934540LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) || ((!(((/* implicit */_Bool) (unsigned char)224))))))))));
        var_24 = ((/* implicit */unsigned short) ((unsigned char) (-(((((/* implicit */int) (unsigned char)224)) << (((3766100134U) - (3766100119U))))))));
    }
    for (signed char i_6 = 1; i_6 < 23; i_6 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) (+((((+(arr_14 [i_6] [20]))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)72)) : (arr_14 [i_6 - 1] [i_6 + 2])))))));
        var_26 = ((/* implicit */unsigned short) (+(min((arr_15 [i_6 - 1]), (min((arr_15 [i_6]), (((/* implicit */unsigned int) (unsigned short)44784))))))));
    }
}
