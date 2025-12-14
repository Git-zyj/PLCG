/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116359
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
    var_18 = ((/* implicit */int) (~(551007086U)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) (((+(11606559823619903588ULL))) <= (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3743960213U)) ? (1518723994U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))) - (max((9836956576613722784ULL), (((/* implicit */unsigned long long int) 1119527096))))))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) (unsigned short)39603);
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 262143U)), (651766628647962710LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65408)))))));
            var_21 = ((/* implicit */unsigned int) (((~(((unsigned long long int) (unsigned char)76)))) & (((/* implicit */unsigned long long int) arr_5 [i_0]))));
            var_22 = ((/* implicit */long long int) (_Bool)1);
        }
        var_23 = ((/* implicit */unsigned short) (-(16856721929782306611ULL)));
        var_24 ^= ((/* implicit */long long int) (unsigned char)106);
    }
    for (unsigned char i_3 = 4; i_3 < 24; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    var_25 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((3432206217U) ^ (((((/* implicit */_Bool) arr_12 [(unsigned short)2] [2LL])) ? (3749387424U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(_Bool)1]))))))))));
                    var_26 = min(((+(min((-7906551281835675430LL), (((/* implicit */long long int) 3378378945U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)198)), (977889078U)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)57)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */short) ((unsigned char) arr_9 [i_3 - 1]));
                        arr_16 [i_3 - 4] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((130023424) / (((/* implicit */int) arr_8 [i_3 - 1]))));
                        var_28 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)40866)) && (((/* implicit */_Bool) (unsigned char)204))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) max((var_29), ((~(((((/* implicit */_Bool) ((signed char) 16856721929782306611ULL))) ? (arr_7 [i_3 - 1]) : (((((/* implicit */_Bool) (unsigned short)39373)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))) : (12748456161494526508ULL)))))))));
        var_30 = ((/* implicit */_Bool) ((unsigned long long int) ((9387869977025405575ULL) * (((/* implicit */unsigned long long int) 2107704871)))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) > (2234433893U)));
    }
    var_32 = (~(min(((+(var_13))), (((/* implicit */long long int) ((signed char) -522312691))))));
}
