/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152935
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 |= ((/* implicit */signed char) (~(802758924U)));
                var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 2869014542U)) ? (3492208375U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 0U)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) ((_Bool) min((arr_3 [i_2] [i_2]), (((/* implicit */unsigned int) 1226080032)))));
        arr_10 [i_2] = ((/* implicit */signed char) ((max((802758903U), (3006489168U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1125899906842622LL))))))));
        var_21 = ((((/* implicit */_Bool) 8191)) ? ((+(4761270073612882888ULL))) : (((/* implicit */unsigned long long int) 802758929U)));
    }
    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (~(((int) 1288478125U))));
        var_23 = ((/* implicit */long long int) (-(((((((/* implicit */unsigned long long int) -1LL)) * (arr_5 [i_3] [7ULL]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))))));
        arr_13 [4U] = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) 3492208366U))), (max((((/* implicit */unsigned short) (unsigned char)86)), (arr_0 [i_3] [i_3]))))))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_3 [i_4 + 3] [i_4 + 1])) % (min((-5097840214136354430LL), (((/* implicit */long long int) (signed char)25)))))))));
            arr_16 [i_4] = ((/* implicit */int) arr_2 [i_3] [i_4]);
            /* LoopSeq 2 */
            for (signed char i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 - 1]))) ^ (((unsigned int) 0LL))))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [1U])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2860448788U)))))));
                    var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3006489170U))));
                    var_28 = ((/* implicit */unsigned int) (signed char)25);
                }
                var_29 |= ((/* implicit */unsigned int) 1518361505245936593ULL);
                var_30 = ((/* implicit */unsigned char) var_9);
                var_31 = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) 802758929U)));
            }
            for (signed char i_7 = 2; i_7 < 11; i_7 += 4) /* same iter space */
            {
                var_32 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_7 - 2] [i_4 + 4] [i_4 + 1] [i_4]))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3492208366U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)31))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_7]))) : (802758945U)))));
                var_33 = ((/* implicit */unsigned long long int) ((unsigned int) ((short) 8194)));
            }
        }
    }
    var_34 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)7233)) : (var_17)))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */int) var_7)) / (var_17))))), (((/* implicit */int) var_5)));
}
