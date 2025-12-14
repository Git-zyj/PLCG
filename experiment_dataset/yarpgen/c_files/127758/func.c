/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127758
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned int) ((signed char) ((var_6) | (min((var_12), (((/* implicit */long long int) var_11)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? ((((!(((/* implicit */_Bool) -6047215350407136644LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) arr_0 [12LL])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) (unsigned short)63623)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) max(((unsigned char)237), ((unsigned char)234)));
        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned int) 835407923)), (var_10))) : (((((/* implicit */_Bool) ((signed char) (signed char)78))) ? (min((((/* implicit */unsigned int) (unsigned char)2)), (3925857374U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_8 [i_1]))))))))));
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-37))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) var_12);
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (short)-1));
        arr_14 [i_2] [i_2] = ((/* implicit */long long int) (short)-20252);
    }
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) == (var_8))))) * (-1LL))), (((/* implicit */long long int) var_10))));
        var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(var_10)))), (-1LL)));
        arr_18 [i_3] = ((/* implicit */short) (unsigned char)152);
    }
    /* LoopSeq 4 */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        arr_21 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) var_12))));
        arr_22 [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */unsigned long long int) arr_19 [i_4])) : (var_0)))));
    }
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((long long int) 79093964)) : (((/* implicit */long long int) ((int) var_14)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned short)15360)))) : (((((/* implicit */_Bool) 1551106368U)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) (signed char)-44)))))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            for (unsigned char i_7 = 1; i_7 < 24; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((-4050580669776497782LL) & (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) (unsigned char)186))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1551106380U)) == (16906541765062493212ULL)))) : (((((/* implicit */int) ((1540202308647058404ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))))) + (((/* implicit */int) ((-2309322494281441787LL) != (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                        var_21 = ((/* implicit */unsigned char) ((long long int) (unsigned char)122));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-20302)), (arr_20 [i_5] [i_5]))))))) ? (min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)41)) - (((/* implicit */int) (short)-32751))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) : ((-(var_5)))))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((arr_20 [i_9] [i_9]), (((/* implicit */unsigned short) (signed char)41)))), (((/* implicit */unsigned short) var_9))))) ? (((((/* implicit */_Bool) -1144790783)) ? (((((/* implicit */_Bool) var_5)) ? (3506212249U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17478))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 16906541765062493217ULL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_20 [i_9] [i_9]))))));
        var_24 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)55)) ? (2147483647U) : (((/* implicit */unsigned int) ((int) 288230376151711743ULL))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 2; i_11 < 24; i_11 += 3) 
            {
                {
                    var_25 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -9223372036854775807LL))))));
                    var_26 = ((/* implicit */long long int) ((unsigned char) ((4095ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                    var_27 = ((/* implicit */unsigned int) var_3);
                    var_28 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)166)) ? (4424522044098428980ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 - 1] [i_11 + 1]))))));
                }
            } 
        } 
        var_29 += ((/* implicit */unsigned char) (signed char)112);
    }
    for (long long int i_12 = 1; i_12 < 16; i_12 += 4) 
    {
        arr_44 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) -20)) ? (((/* implicit */int) var_13)) : (((int) 288230376151711743ULL)))) : (((((/* implicit */_Bool) 2147475456LL)) ? (((/* implicit */int) ((arr_36 [i_12]) > (((/* implicit */unsigned long long int) arr_27 [(unsigned char)6] [i_12] [i_12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_30 = (((~(((/* implicit */int) var_3)))) % ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (unsigned short)26129)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_14 = 2; i_14 < 16; i_14 += 4) 
            {
                arr_51 [i_12] [i_13] [i_12] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51533))) : (206014285U)))));
                arr_52 [i_12] [5LL] [i_12] [5LL] = ((/* implicit */unsigned int) var_14);
                arr_53 [i_12] [i_14] [i_13] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_12 + 3])) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) var_1))));
                arr_54 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_13] [i_12])) ? (21) : (arr_24 [i_13])));
            }
            /* vectorizable */
            for (unsigned int i_15 = 1; i_15 < 16; i_15 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_10 [i_12 + 1]) : (((/* implicit */int) ((unsigned char) (unsigned char)66)))));
                var_32 -= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)30))) : (-6474082087344814007LL)));
            }
            for (unsigned int i_16 = 1; i_16 < 16; i_16 += 2) /* same iter space */
            {
                arr_62 [i_12] [i_13] [i_12] = ((/* implicit */int) var_13);
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (~(max((arr_55 [i_16 + 2] [i_13] [i_12 + 2]), (((/* implicit */unsigned int) (unsigned char)66)))))))));
                arr_63 [i_13] [(signed char)7] [i_12] = ((/* implicit */unsigned char) var_7);
                arr_64 [i_16] [i_12] [i_12] [i_12] = ((/* implicit */short) (((_Bool)1) ? (18158513697557839896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31537)))));
            }
        }
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (var_11) : (arr_27 [i_12] [i_12 + 3] [i_12])))) ? ((+(((/* implicit */int) (signed char)44)))) : (((/* implicit */int) ((unsigned char) arr_27 [(unsigned char)23] [i_12 - 1] [i_12])))));
        var_35 = ((/* implicit */short) arr_57 [i_12] [i_12] [i_12] [i_12]);
    }
    var_36 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min(((unsigned short)14003), (((/* implicit */unsigned short) var_9)))))))));
}
