/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179664
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) && ((_Bool)0)))))) ^ (((/* implicit */int) (_Bool)0)))))));
                    arr_8 [i_0 - 1] [i_0] [(signed char)14] = ((/* implicit */short) min((((((/* implicit */int) (unsigned char)56)) >> (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-28)), (var_5)))) - (94))))), (((((/* implicit */_Bool) (unsigned short)41745)) ? ((+(((/* implicit */int) (unsigned short)35886)))) : (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (signed char)31)) : (-24927035)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_13 = ((/* implicit */long long int) ((4294967292U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56)))));
                        var_14 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) 4283533743511678286LL)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (signed char)-1)))), ((((((_Bool)1) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_3] [i_3] [i_5])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_5] [10LL])))) ^ (((/* implicit */int) (!(arr_13 [i_0] [i_3] [i_4] [i_5]))))))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                        {
                            arr_18 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31))) % (1515393458U)))), (((((/* implicit */_Bool) ((-4283533743511678287LL) % (-7020924959911463988LL)))) ? (-5052357462670140844LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)200)) / (arr_5 [i_0] [9]))))))));
                            var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-31))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)29)) >> (((24927016) - (24927004)))))) ? (((((/* implicit */int) arr_17 [(_Bool)1] [i_0 + 1] [i_0 + 2] [(unsigned char)14] [i_0])) * (((/* implicit */int) arr_11 [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (unsigned char)212)) : (-24927035)))));
                            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4720)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27436))) & (7020924959911463975LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)44)))))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (signed char)127))))) : (((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5])) : (((/* implicit */int) (signed char)118))))));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                        {
                            var_18 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))));
                            var_19 = ((/* implicit */_Bool) var_0);
                            arr_22 [i_0] [i_3] = var_7;
                            var_20 -= ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)38099))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) : (max((7020924959911463987LL), (-8140796032492417798LL))))));
                        }
                    }
                } 
            } 
        } 
        arr_23 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned long long int) (short)-7105))) ? (((/* implicit */long long int) min((24927011), (((/* implicit */int) (_Bool)1))))) : ((((_Bool)0) ? (-4283533743511678286LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27443))))))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
        var_21 ^= ((/* implicit */unsigned long long int) 24927029);
    }
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        for (unsigned short i_9 = 1; i_9 < 19; i_9 += 4) 
        {
            {
                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -24927011)) && (((/* implicit */_Bool) (unsigned short)64196))));
                arr_30 [i_8] [i_9] [i_9 + 2] = ((/* implicit */_Bool) (short)1023);
                var_23 = ((/* implicit */_Bool) (-((~(((((/* implicit */int) (signed char)8)) & (-24927047)))))));
                var_24 = ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) (signed char)-115);
    var_26 = ((/* implicit */unsigned short) ((min((min((484072129), (((/* implicit */int) (signed char)-118)))), (min((24927062), (((/* implicit */int) (short)-32065)))))) != (((/* implicit */int) var_6))));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15872)) ? (((/* implicit */int) (unsigned short)10200)) : (((/* implicit */int) (short)1026))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)212))))) >> (min((((/* implicit */int) (_Bool)0)), (24927011)))))));
}
