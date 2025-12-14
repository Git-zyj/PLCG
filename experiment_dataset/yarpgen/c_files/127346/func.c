/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127346
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
    for (short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_20 = min((((((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) >> (((min((((/* implicit */unsigned long long int) 8733113215064097053LL)), (18446744073709551605ULL))) - (8733113215064097029ULL))))), (((/* implicit */int) max((((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)))), ((unsigned char)97)))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */long long int) min((min(((~(((/* implicit */int) (_Bool)1)))), (arr_0 [i_0] [i_0 - 1]))), (min((((/* implicit */int) arr_3 [i_0 + 1])), ((+(((/* implicit */int) (unsigned char)150))))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) ((long long int) (short)32762)))), ((~(((/* implicit */int) max(((unsigned char)8), (((/* implicit */unsigned char) (_Bool)1))))))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8733113215064097054LL)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))), ((!(((/* implicit */_Bool) (unsigned short)27449))))))) : (((/* implicit */int) min((((unsigned short) arr_5 [i_1])), (max(((unsigned short)27430), ((unsigned short)3584))))))));
                    var_23 = ((/* implicit */_Bool) (((-(arr_1 [i_1 + 1]))) << (((/* implicit */int) ((arr_1 [i_1 + 1]) > (arr_1 [i_1 + 1]))))));
                    var_24 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_1])) > (((/* implicit */int) (unsigned short)31935))))), ((((_Bool)1) ? (-1745616367548320798LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */signed char) max((20ULL), (((/* implicit */unsigned long long int) -1745616367548320798LL))));
                                var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned short)7111)) ? (((/* implicit */int) ((unsigned char) (unsigned short)65535))) : (((/* implicit */int) (_Bool)1))))));
                                arr_19 [(_Bool)1] [i_1] [(_Bool)1] [i_3] [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned short) (signed char)-81)), (min(((unsigned short)9157), (((/* implicit */unsigned short) (_Bool)0)))))));
                                var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_18 [i_1] [i_1 + 1] [i_1] [i_1] [i_1]), (arr_18 [i_4 - 1] [i_1 + 2] [(unsigned char)9] [i_1] [i_1])))) ? (((/* implicit */long long int) (+(((4280159053U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((min((((/* implicit */long long int) (_Bool)1)), (3342596375159616587LL))) / (((/* implicit */long long int) ((int) (unsigned char)64)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_1] = ((/* implicit */unsigned int) ((unsigned char) 524287));
        var_28 |= ((/* implicit */signed char) (~((~(((/* implicit */int) min(((unsigned short)38269), (((/* implicit */unsigned short) arr_8 [i_1 + 2] [i_1 + 2] [(_Bool)1])))))))));
    }
    for (long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) -1741564317756088331LL);
        var_30 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 14808245U)))) ? ((+(((/* implicit */int) (unsigned short)2897)))) : (((((0) >> (((((/* implicit */int) (unsigned char)85)) - (80))))) >> (min((arr_21 [i_6] [i_6]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        var_31 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) min((-178814837), (((/* implicit */int) (unsigned char)85))))), (((((/* implicit */_Bool) (unsigned short)4131)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) : (arr_21 [i_6] [i_6]))))) < (max((max((((/* implicit */unsigned long long int) (unsigned char)65)), (arr_21 [i_6] [i_6]))), (((/* implicit */unsigned long long int) arr_0 [i_6] [i_6]))))));
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) min(((short)(-32767 - 1)), ((short)649)))) : (((/* implicit */int) (unsigned short)62638))))) ? (((((/* implicit */_Bool) (unsigned short)2897)) ? (((/* implicit */int) (unsigned char)64)) : (((((/* implicit */_Bool) (unsigned short)2897)) ? (1533841492) : (((/* implicit */int) (short)27913)))))) : (((int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7] [i_7]))) : (arr_1 [i_7]))))));
        var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((((/* implicit */int) (short)27984)) | (((/* implicit */int) (unsigned short)62638))))))), (arr_1 [i_7])));
    }
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            {
                arr_31 [i_8] = ((/* implicit */_Bool) arr_1 [i_8]);
                arr_32 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) min((((unsigned int) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (signed char)114))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(1666946988513499923ULL)))))))));
                var_34 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 2147483647)))))), ((+(((7895689124634340619ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_8] [i_8])) : (arr_26 [i_8]))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (288229276640083968ULL))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)32757))) ? (((/* implicit */int) ((unsigned char) 288229276640083968ULL))) : (((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (short)31654)))))))));
}
