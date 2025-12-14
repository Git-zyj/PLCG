/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133326
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) == (5853406283595244940LL))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) var_9)) : (2283637950664706457ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3142)) ? (5047400407682147735LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10)))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 184861985U)) : (var_7))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)30786))))))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)58))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (short)-10))))) : (((((/* implicit */_Bool) (unsigned short)34738)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))) : (7886413826663264102LL)))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)63)), (var_10))) : (((6671326394188061968ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (unsigned short)3142)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) (unsigned short)65530))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12994244532397149463ULL)) && (((/* implicit */_Bool) (unsigned short)49627)))))) : (2153266658723505668LL)));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)34766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48687))) : (5628826711590252454ULL)));
                            var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)30976)) >= (((/* implicit */int) (signed char)-104)))) ? (2283637950664706457ULL) : (12994244532397149464ULL)));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9063312339832318715ULL)) ? (72989177341618884LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25958))))) / (((/* implicit */long long int) 3543145525U)))))));
                        }
                        for (signed char i_5 = 1; i_5 < 16; i_5 += 4) 
                        {
                            arr_15 [i_0 - 1] [i_0 + 2] [i_1] [i_2] [i_3] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1257448676)) ? (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3150)))));
                            arr_16 [i_0 + 2] [i_1] [(unsigned char)10] [(signed char)0] [i_2] [i_3] [i_5] = ((((/* implicit */_Bool) 72989177341618884LL)) ? (-8655169201423264831LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30971))));
                            arr_17 [7U] [i_5 + 2] [i_5] [15LL] [i_5 - 1] = ((((/* implicit */_Bool) 21ULL)) ? (8655169201423264820LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34750))));
                            var_24 = ((((/* implicit */_Bool) 4294967291U)) ? (2304942882U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45335))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) (unsigned short)1622)) - (1616)))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)34749)) ? (((/* implicit */unsigned int) 483913836)) : (2177171173U)));
                            arr_21 [i_0 - 1] [(unsigned char)9] [i_0 + 2] [i_0 - 1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -8655169201423264821LL)) ? (var_11) : (((/* implicit */unsigned long long int) 8655169201423264820LL)))));
                            var_27 ^= ((/* implicit */short) 3026420675U);
                        }
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((-1060620987) / (((/* implicit */int) (unsigned short)22203))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63914))) : (((((/* implicit */_Bool) 4021321414U)) ? (8928104221711503434ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11)))))));
                        arr_22 [i_3] [i_2 + 1] [i_1] [i_0 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3673615511U)) ? (((((/* implicit */_Bool) (unsigned short)24493)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)4032)))) : (((/* implicit */int) (unsigned short)34559))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53379)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60786))) : (7323354115840404046ULL)));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_14)) ? (-979147648) : (((/* implicit */int) var_17)))) + (2147483647))) >> (((4021321395U) - (4021321382U)))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned int) max((var_31), (((((/* implicit */_Bool) (unsigned short)60794)) ? (((/* implicit */unsigned int) 979147627)) : (3746117260U)))));
            arr_26 [i_0] [i_7] = ((/* implicit */signed char) (unsigned short)39748);
            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-10600))) % (72989177341618904LL)));
            arr_27 [i_0] [i_0] = ((/* implicit */_Bool) ((0LL) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)39748)))))));
        }
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_3))));
        var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -1098986597)) : (2934905284U)))) ? (3769414010U) : (((/* implicit */unsigned int) 2147483645))))) ? (-3384235385389583410LL) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -8676820358094108269LL)))))))));
    }
    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)34749)))), (min((((/* implicit */int) (short)-29740)), (979147645)))))) ? (min((max((var_10), (((/* implicit */unsigned long long int) (short)0)))), (((/* implicit */unsigned long long int) (+(8LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(2137269775718284190ULL))) == (((/* implicit */unsigned long long int) ((var_9) & (((/* implicit */long long int) 2992938270U)))))))))));
}
