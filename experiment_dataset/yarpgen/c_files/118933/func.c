/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118933
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) ((((_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) % (14943141760952952034ULL)))) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0]))))))) : ((-(((arr_0 [i_0]) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (_Bool)0))))))));
        arr_2 [i_0] = ((/* implicit */int) ((signed char) (!(arr_0 [i_0]))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned short)65380))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_0 [i_1 - 2])) ^ (((/* implicit */int) var_0))))));
            var_15 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)11311))));
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((8329782139736131501ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11311)))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (var_1))))), (((/* implicit */unsigned int) var_7))));
            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3028147027U)))) ? (((arr_3 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)45036))))))) * (((/* implicit */unsigned long long int) -6853484180206883830LL))));
        }
    }
    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_4 = 3; i_4 < 13; i_4 += 2) 
        {
            arr_15 [i_4] [i_3] = ((/* implicit */_Bool) arr_10 [i_3]);
            arr_16 [i_3] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_0 [i_4 + 1]))))));
            var_18 |= ((/* implicit */unsigned char) arr_4 [(unsigned short)12] [6LL]);
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3] [i_4 - 1])) == ((+(((/* implicit */int) ((arr_10 [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11309))))))))));
        }
        for (long long int i_5 = 4; i_5 < 13; i_5 += 1) 
        {
            arr_19 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_5 + 1] [i_3]))))) ? (((((/* implicit */_Bool) arr_1 [i_5 + 1] [i_3])) ? (((/* implicit */int) arr_1 [i_5 - 4] [i_3])) : (((/* implicit */int) arr_1 [i_5 - 2] [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5 - 3] [i_3])) || (((/* implicit */_Bool) arr_1 [i_5 + 1] [i_3])))))));
            var_20 = ((/* implicit */int) min((var_20), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_3] [(unsigned char)12])) : (((/* implicit */int) arr_1 [i_5 - 1] [4ULL])))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_3] [(signed char)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58007))) : (8329782139736131501ULL))))))));
            arr_20 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_3]))))) ? (((/* implicit */unsigned long long int) arr_10 [i_3])) : (((unsigned long long int) arr_0 [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_12 [i_5] [i_3] [i_3])))))))) : ((-(((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (3063723449U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5533)))))))));
        }
        for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
        {
            arr_23 [i_3] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) -6853484180206883830LL))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            arr_24 [i_3] [i_3] = ((/* implicit */long long int) var_8);
            var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((2198104052407923309LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11311))) : (904879215740579379ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)68))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)104)))) : (((/* implicit */int) arr_21 [i_6 - 2] [i_6 - 2])))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(9551693386469626712ULL)))) ? ((-(16072928282822888029ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_9))));
        }
        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) arr_1 [i_3] [i_3])))) >= ((-(((/* implicit */int) arr_1 [i_3] [i_3]))))));
        var_26 += ((/* implicit */_Bool) var_0);
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) ((((arr_26 [i_7]) ? (((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((9551693386469626724ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))))) >> (((((969613599495571132ULL) / (var_11))) << (((/* implicit */int) var_5))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((arr_25 [i_7]) || (((/* implicit */_Bool) (signed char)18))));
                    arr_35 [0LL] [i_8] [i_7] = ((/* implicit */unsigned char) max((((unsigned int) var_9)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                    var_29 = ((unsigned char) 17477130474213980463ULL);
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) ((8895050687239924896ULL) != (14943141760952952034ULL)));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_7] [i_7] [i_7]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((signed char) arr_3 [i_7] [i_7] [7LL]))) : (((/* implicit */int) arr_1 [i_7] [i_7]))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (1997611523U)))) ? (max((((/* implicit */unsigned long long int) var_0)), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_7 [i_7] [i_7] [i_7])))))))));
    }
    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (((unsigned short) var_5))))))))));
}
