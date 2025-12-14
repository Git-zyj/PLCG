/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15557
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */long long int) (((_Bool)1) ? (8439046861930054563ULL) : (10007697211779497053ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 8439046861930054568ULL)) ? (((/* implicit */int) (short)-32742)) : (((/* implicit */int) var_8))))) > (((((((/* implicit */long long int) ((/* implicit */int) var_10))) & (-6080112711326162954LL))) / (8486892207308739495LL)))));
                                var_16 &= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)176)))))));
                                var_17 = ((long long int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) : (975819664265667684LL))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -9223039411471831873LL)) ? (10007697211779497067ULL) : (var_13))) != (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)83)))) ^ (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)55816))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-16879)) || (((/* implicit */_Bool) var_14)))))))));
    /* LoopSeq 3 */
    for (long long int i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) (short)1500)) : (((/* implicit */int) ((short) (unsigned char)182)))));
        var_20 -= var_10;
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 20; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_21 [i_5] = ((/* implicit */unsigned char) (~(27021597764222976LL)));
                    arr_22 [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (signed char)15))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (570928966186722796LL))) : (-570928966186722807LL)));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? ((-(-570928966186722796LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34268)) >> (((/* implicit */int) var_4))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (10007697211779497038ULL))) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_8 = 3; i_8 < 14; i_8 += 3) 
    {
        arr_25 [i_8] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (signed char)15)) & (((/* implicit */int) (unsigned short)60517)))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8439046861930054566ULL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187)))))) ^ (var_13)));
    }
    for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        arr_28 [i_9] [i_9] |= ((/* implicit */signed char) (unsigned short)31267);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) ((unsigned char) var_9)))))) ? (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54686))) : (var_2))) : (((long long int) (_Bool)1))));
        arr_29 [i_9] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) >= (((((/* implicit */_Bool) (unsigned short)53868)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))))) ? (((((/* implicit */_Bool) (unsigned short)11667)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21)))));
    }
    var_24 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_10 = 4; i_10 < 21; i_10 += 1) 
    {
        var_25 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29933))) >= (0U))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 3U)))) : (var_5)));
        arr_33 [i_10] [i_10] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_4)) == (((/* implicit */int) var_4))))));
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31277))) : (-9223372036854775795LL)))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (short)-32752))))))));
    }
}
