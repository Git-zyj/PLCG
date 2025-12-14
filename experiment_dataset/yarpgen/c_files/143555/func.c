/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143555
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
    var_19 = ((/* implicit */int) var_12);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) var_11))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_5))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_16), (var_3))))))) ? (((unsigned long long int) 17710996257093726130ULL)) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (!((_Bool)1))))));
                    var_24 = ((/* implicit */unsigned long long int) ((signed char) ((arr_2 [i_0]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) var_0))))))));
                    var_25 *= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_2] [i_1 - 1] [i_2]))), (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2] [i_1] [i_0] [i_0]) : (var_7))))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_26 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))) % (735747816615825485ULL)));
                    var_27 = 17463800523856234950ULL;
                }
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0]))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_5] [i_6])) ? (2865604806606225255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_29 = ((/* implicit */unsigned long long int) ((((arr_3 [i_1 - 1] [i_1 - 1] [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))))) << (((((((/* implicit */unsigned long long int) arr_12 [i_1 - 1] [i_1 - 1] [i_1] [(signed char)10])) | (arr_6 [i_1 - 1] [i_1 - 1] [i_5] [i_5]))) - (11526751444174498615ULL)))));
                                var_30 = ((/* implicit */unsigned long long int) (signed char)-1);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0] [i_0])))))) >= (var_7)))), (arr_24 [i_8] [i_7] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                            {
                                var_32 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_18)) | (((/* implicit */int) var_11)))));
                                var_33 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [13ULL])), (var_13)))))));
                                var_34 = 0LL;
                                var_35 = ((/* implicit */signed char) ((max((min((arr_10 [i_9] [i_7] [i_1]), (10297491470766006511ULL))), (((/* implicit */unsigned long long int) ((unsigned char) 1055670224501110093ULL))))) | (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1 - 1] [i_8]))));
                                var_36 = ((/* implicit */long long int) ((_Bool) max((9864168224189438882ULL), (13484955604599630895ULL))));
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                            {
                                var_37 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_18 [i_1 - 1] [i_1] [i_7] [i_8] [i_1])) ^ (((/* implicit */int) var_16)))));
                                var_38 = ((/* implicit */signed char) var_5);
                            }
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_13))));
                        }
                    } 
                } 
            }
        } 
    } 
}
