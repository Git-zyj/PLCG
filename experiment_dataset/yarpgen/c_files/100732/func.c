/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100732
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
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-102))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)53732))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17747))) : (1682429451U))))), (((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) var_16))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_19))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                                arr_15 [i_4] [i_4] [i_2] [i_2] [16ULL] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11338446954389773224ULL)))))) >= ((-(16555365407858553954ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3])))))) : (((unsigned long long int) (+(7108297119319778391ULL))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */signed char) var_10);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_5] [i_0] [i_5] [i_0] [i_5]) ? (((((/* implicit */int) var_10)) | (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) ((unsigned short) var_6))) : ((+(((/* implicit */int) (unsigned short)0))))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 17; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)61965))))) : ((-(((unsigned int) (unsigned short)65533))))));
                                arr_25 [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_21 [i_6] [i_6 - 1] [i_7 - 1] [i_7 - 1])))));
                                arr_26 [i_0] [i_5] [i_6 + 1] [i_6] [i_6 + 1] = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)65534)))));
                                arr_27 [i_0] [i_5] [i_5] [i_7] [i_6] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (9141390301573175391ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    {
                        arr_36 [i_9 + 1] &= ((/* implicit */unsigned long long int) var_4);
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (unsigned short)25594)) : (((/* implicit */int) arr_7 [i_9]))))))))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_17)))))) ? (max((((/* implicit */int) ((short) arr_0 [i_0]))), ((~(((/* implicit */int) arr_7 [i_0])))))) : (((/* implicit */int) ((signed char) var_1))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (731104849U)))) > ((-(min((11338446954389773224ULL), (15007363288383798591ULL)))))));
                arr_42 [i_12] = ((/* implicit */unsigned long long int) arr_12 [6ULL] [i_13] [i_12] [i_12] [(short)14] [(short)14]);
                /* LoopSeq 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_28 &= ((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_13] [i_13] [i_13] [i_12])) < (var_17))))));
                    arr_45 [i_12] [i_12] [i_13] [i_12] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) -2057234574664912933LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3011775388U)))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 2; i_15 < 15; i_15 += 4) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3011775388U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) : (var_11)))) || (((/* implicit */_Bool) var_18))))))));
                                var_30 = ((/* implicit */long long int) max((((short) ((((/* implicit */int) var_15)) == (((/* implicit */int) (_Bool)1))))), (((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) arr_33 [i_12] [i_12] [i_12] [i_12]))))))));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)61965), ((unsigned short)0)))) < (((((/* implicit */int) max((((/* implicit */short) var_16)), (var_10)))) << (((((((/* implicit */int) var_16)) + (41))) - (15)))))));
                                arr_52 [i_16] [i_15] [i_15] [(unsigned char)13] [i_13] [i_12] = (((_Bool)1) ? (12519543815169043075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22116))));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64681)) ? (12519543815169043075ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_16] [i_15 - 1] [i_15] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (arr_38 [i_12] [i_14])))) : (max((((/* implicit */long long int) (+(1283191913U)))), (8754465630181563560LL))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    arr_55 [i_12] [i_12] [i_12] = var_3;
                    arr_56 [7LL] [i_13] [7LL] [i_13] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (short)(-32767 - 1)))))));
                    var_33 = ((/* implicit */short) (((-(var_11))) % ((~(((((/* implicit */_Bool) var_11)) ? (5927200258540508522ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                }
                for (signed char i_18 = 1; i_18 < 15; i_18 += 4) 
                {
                    var_34 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) var_4)))));
                    arr_59 [i_12] = ((/* implicit */_Bool) min((7108297119319778391ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32767)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 3; i_19 < 14; i_19 += 1) 
                    {
                        for (signed char i_20 = 1; i_20 < 14; i_20 += 1) 
                        {
                            {
                                var_35 = ((unsigned long long int) (-(((/* implicit */int) var_16))));
                                arr_65 [i_19 + 2] [(short)12] [(short)12] [i_12] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((-(8305668923174606200ULL))))))));
                                arr_66 [i_19] [i_12] [i_12] [(_Bool)1] [i_12] [i_19 + 1] [i_19] = ((/* implicit */_Bool) (short)32759);
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_49 [i_13] [i_12]))) ? (((arr_41 [i_12] [i_13]) ? (12702312842744587826ULL) : (((/* implicit */unsigned long long int) 3011775406U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((-(4294967291U))))))));
                /* LoopNest 3 */
                for (int i_21 = 0; i_21 < 16; i_21 += 3) 
                {
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) ((((_Bool) (+(var_11)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_19 [i_12] [i_13] [(unsigned short)8]))));
                                var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(3011775388U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_39 = ((/* implicit */short) max((((/* implicit */int) ((_Bool) var_1))), ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)254))))))));
    var_40 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
}
